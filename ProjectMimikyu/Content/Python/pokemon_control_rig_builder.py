import unreal


def test():
    unreal.log("pokemon_control_rig_builder.py loaded successfully.")
    print("pokemon_control_rig_builder.py loaded successfully.")


# ------------------------------------------------------------
# Shared helpers
# ------------------------------------------------------------

def get_first_property(obj, names, default=None, required=False):
    for name in names:
        try:
            return obj.get_editor_property(name)
        except Exception:
            pass

    if required:
        raise RuntimeError(f"Could not find property on {obj}: {names}")

    return default


def set_first_property(obj, names, value, required=False):
    last_error = None

    for name in names:
        try:
            obj.set_editor_property(name, value)
            return name
        except Exception as error:
            last_error = error

    if required:
        raise RuntimeError(f"Could not set property {names} on {obj}. Last error: {last_error}")

    return None


def is_none_name(value):
    if value is None:
        return True

    text = str(value)
    return text == "" or text.lower() == "none"


def make_key(element_type, name):
    return unreal.RigElementKey(type=element_type, name=str(name))


def make_empty_key():
    return unreal.RigElementKey(type=unreal.RigElementType.NONE, name="")


def get_key_name(key):
    try:
        return str(key.name)
    except Exception:
        try:
            return str(key.get_editor_property("name"))
        except Exception:
            return ""


def get_existing_control_key(hierarchy, control_name):
    for key in hierarchy.get_controls():
        if get_key_name(key) == str(control_name):
            return key

    return None


def get_global_transform_safe(hierarchy, key):
    attempts = [
        lambda: hierarchy.get_global_transform(key, True),
        lambda: hierarchy.get_global_transform(key, False),
        lambda: hierarchy.get_global_transform(key),
    ]

    last_error = None

    for attempt in attempts:
        try:
            return attempt()
        except Exception as error:
            last_error = error

    raise RuntimeError(f"Could not get global transform for {key}. Last error: {last_error}")


def get_local_transform_safe(hierarchy, key):
    attempts = [
        lambda: hierarchy.get_local_transform(key, True),
        lambda: hierarchy.get_local_transform(key, False),
        lambda: hierarchy.get_local_transform(key),
    ]

    last_error = None

    for attempt in attempts:
        try:
            return attempt()
        except Exception as error:
            last_error = error

    raise RuntimeError(f"Could not get local transform for {key}. Last error: {last_error}")


def set_local_transform_safe(hierarchy, key, transform):
    attempts_initial = [
        lambda: hierarchy.set_local_transform(key, transform, True, False, False, False),
        lambda: hierarchy.set_local_transform(key, transform, True, False, False),
        lambda: hierarchy.set_local_transform(key, transform, True, False),
        lambda: hierarchy.set_local_transform(key, transform, True),
    ]

    attempts_current = [
        lambda: hierarchy.set_local_transform(key, transform, False, False, False, False),
        lambda: hierarchy.set_local_transform(key, transform, False, False, False),
        lambda: hierarchy.set_local_transform(key, transform, False, False),
        lambda: hierarchy.set_local_transform(key, transform, False),
        lambda: hierarchy.set_local_transform(key, transform),
    ]

    last_error = None

    for attempt in attempts_initial:
        try:
            attempt()
            break
        except Exception as error:
            last_error = error
    else:
        raise RuntimeError(f"Could not set initial local transform for {key}. Last error: {last_error}")

    last_error = None

    for attempt in attempts_current:
        try:
            attempt()
            return
        except Exception as error:
            last_error = error

    raise RuntimeError(f"Could not set current local transform for {key}. Last error: {last_error}")


def make_control_value(hierarchy):
    try:
        return hierarchy.make_control_value_from_euler_transform(unreal.EulerTransform())
    except Exception:
        pass

    try:
        return hierarchy.make_control_value_from_transform(unreal.Transform())
    except Exception:
        pass

    return unreal.RigControlValue()


def make_shape_transform(shape_scale):
    transform = unreal.Transform()

    if shape_scale is None:
        shape_scale = unreal.Vector(1.0, 1.0, 1.0)

    try:
        transform.set_editor_property("scale3d", shape_scale)
    except Exception:
        try:
            transform.set_editor_property("scale", shape_scale)
        except Exception:
            pass

    return transform


def choose_shape_color(control_name):
    name = str(control_name).lower()

    if "left" in name:
        return unreal.LinearColor(0.1, 0.3, 1.0, 1.0)

    if "right" in name:
        return unreal.LinearColor(1.0, 0.1, 0.1, 1.0)

    if "jaw" in name or "eye" in name or "head" in name or "neck" in name:
        return unreal.LinearColor(0.0, 1.0, 0.2, 1.0)

    if "tail" in name:
        return unreal.LinearColor(1.0, 0.4, 0.0, 1.0)

    if "global" in name:
        return unreal.LinearColor(1.0, 1.0, 0.0, 1.0)

    return unreal.LinearColor(1.0, 1.0, 1.0, 1.0)


def make_control_settings(control_def):
    settings = unreal.RigControlSettings()

    control_name = get_first_property(control_def, ["control_name", "ControlName"], required=True)
    shape_name = get_first_property(control_def, ["shape_name", "ShapeName"], default="Default")
    shape_scale = get_first_property(
        control_def,
        ["shape_scale", "ShapeScale"],
        default=unreal.Vector(1.0, 1.0, 1.0),
    )

    if is_none_name(shape_name):
        shape_name = "Default"

    settings.set_editor_property("control_type", unreal.RigControlType.EULER_TRANSFORM)
    settings.set_editor_property("animation_type", unreal.RigControlAnimationType.ANIMATION_CONTROL)
    settings.set_editor_property("shape_visible", True)
    settings.set_editor_property("shape_name", str(shape_name))
    
    shape_color = get_first_property(
    control_def,
    ["shape_color", "ShapeColor"],
    default=None,
    )

    if shape_color is None:
        shape_color = choose_shape_color(control_name)

    settings.set_editor_property("shape_color", shape_color)
    settings.set_editor_property("shape_transform", get_shape_transform_from_control_def(control_def))

    return settings


# ------------------------------------------------------------
# Control Rig build logic
# ------------------------------------------------------------

def set_control_shape_transform_safe(hierarchy, control_key, shape_transform):
    attempts = [
        lambda: hierarchy.set_control_shape_transform(control_key, shape_transform, True, False, False),
        lambda: hierarchy.set_control_shape_transform(control_key, shape_transform, True, False),
        lambda: hierarchy.set_control_shape_transform(control_key, shape_transform, True),
        lambda: hierarchy.set_control_shape_transform(control_key, shape_transform),
    ]

    last_error = None

    for attempt in attempts:
        try:
            return attempt()
        except Exception as error:
            last_error = error

    raise RuntimeError(
        f"Could not set control shape transform for {control_key}. Last error: {last_error}"
    )


def get_shape_transform_from_control_def(control_def):
    shape_scale = get_first_property(
        control_def,
        ["shape_scale", "ShapeScale"],
        default=unreal.Vector(1.0, 1.0, 1.0),
    )

    shape_offset = get_first_property(
        control_def,
        ["shape_offset", "ShapeOffset"],
        default=None,
    )

    if shape_offset is None:
        shape_transform = unreal.Transform()
    else:
        shape_transform = shape_offset

    # ShapeOffset handles visual location/rotation.
    # ShapeScale still owns visual scale.
    try:
        shape_transform.set_editor_property("scale3d", shape_scale)
    except Exception:
        try:
            shape_transform.set_editor_property("scale", shape_scale)
        except Exception:
            pass

    return shape_transform

def clear_generated_mappings_on_rig(control_rig_class_path):
    generated_class = unreal.load_object(None, control_rig_class_path)

    if generated_class is None:
        raise RuntimeError(f"Could not load Control Rig generated class: {control_rig_class_path}")

    cdo = unreal.get_default_object(generated_class)
    cdo.modify()

    set_first_property(
        cdo,
        ["GeneratedFKMappings", "generated_fk_mappings", "generated_fkmappings"],
        [],
        required=True,
    )

    print("Temporarily cleared GeneratedFKMappings on Control Rig CDO.")


def copy_generated_mappings_to_rig(profile, control_rig_class_path):
    generated_class = unreal.load_object(None, control_rig_class_path)

    if generated_class is None:
        raise RuntimeError(f"Could not load Control Rig generated class: {control_rig_class_path}")

    generated_mappings = get_first_property(
        profile,
        ["generated_fk_mappings", "generated_fkmappings", "GeneratedFKMappings"],
        required=True,
    )

    cdo = unreal.get_default_object(generated_class)
    cdo.modify()

    set_first_property(
        cdo,
        ["GeneratedFKMappings", "generated_fk_mappings", "generated_fkmappings"],
        list(generated_mappings),
        required=True,
    )

    print(f"Restored {len(generated_mappings)} FK mappings on Control Rig CDO.")


def get_control_rig_generated_class_path(control_rig_path):
    if not control_rig_path:
        raise RuntimeError("Control Rig path is empty.")

    clean_path = str(control_rig_path).strip()

    # Expected input:
    # /Game/Folder/CR_Torterra.CR_Torterra
    #
    # Expected output:
    # /Game/Folder/CR_Torterra.CR_Torterra_C
    if clean_path.endswith("_C"):
        return clean_path

    return clean_path + "_C"


def build_control_rig_from_profile_auto_class(profile_path, control_rig_path):
    control_rig_class_path = get_control_rig_generated_class_path(control_rig_path)

    return build_control_rig_from_profile(
        profile_path,
        control_rig_path,
        control_rig_class_path,
    )

def get_control_local_rest_transform(hierarchy, control_def):
    bone_name = get_first_property(control_def, ["bone_name", "BoneName"], required=True)
    parent_control_name = get_first_property(control_def, ["parent_control", "ParentControl"], default=None)

    bone_key = make_key(unreal.RigElementType.BONE, bone_name)

    if is_none_name(parent_control_name):
        return get_global_transform_safe(hierarchy, bone_key)

    return get_local_transform_safe(hierarchy, bone_key)


def build_torterra_test():
    return build_control_rig_from_profile(
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/Animation/DA_CRBuild_Torterra.DA_CRBuild_Torterra",
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/CR_Torterra_AutoBuildTest.CR_Torterra_AutoBuildTest",
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/CR_Torterra_AutoBuildTest.CR_Torterra_AutoBuildTest_C",
    )


def build_torterra():
    return build_control_rig_from_profile(
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/Animation/DA_CRBuild_Torterra.DA_CRBuild_Torterra",
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/CR_Torterra.CR_Torterra",
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/CR_Torterra.CR_Torterra_C",
    )

# ------------------------------------------------------------
# Shape preset helpers
# ------------------------------------------------------------

TORTERRA_SHAPE_PRESET = {
    # Root / body
    "CTRL_Global": ("Circle_Thin", (1.2, 1.2, 1.2)),
    "CTRL_Waist": ("Box_Thin", (0.45, 0.35, 0.25)),
    "CTRL_Hips": ("Box_Thin", (0.35, 0.3, 0.22)),

    # Spine / neck / head
    "CTRL_Spine_01": ("Circle_Thin", (0.32, 0.32, 0.32)),
    "CTRL_Spine_02": ("Circle_Thin", (0.3, 0.3, 0.3)),
    "CTRL_Neck": ("Circle_Thin", (0.22, 0.22, 0.22)),
    "CTRL_Head": ("Box_Thin", (0.35, 0.28, 0.24), (8.0, 0.0, 0.0)),

    # Face bones
    "CTRL_Jaw": ("Circle_Thin", (0.14, 0.14, 0.14)),
    "CTRL_Left_Eyelid": ("Circle_Thin", (0.08, 0.08, 0.08)),
    "CTRL_Right_Eyelid": ("Circle_Thin", (0.08, 0.08, 0.08)),

    # Tail
    "CTRL_Tail_01": ("Circle_Thin", (0.22, 0.22, 0.22)),
    "CTRL_Tail_02": ("Circle_Thin", (0.18, 0.18, 0.18)),
    "CTRL_Tail_03": ("Circle_Thin", (0.14, 0.14, 0.14)),

    # Left rear leg
    "CTRL_Left_Leg_01": ("Circle_Thin", (0.2, 0.2, 0.2)),
    "CTRL_Left_Leg_02": ("Circle_Thin", (0.16, 0.16, 0.16)),
    "CTRL_Left_Foot": ("Box_Thin", (0.18, 0.13, 0.1)),

    # Right rear leg
    "CTRL_Right_Leg_01": ("Circle_Thin", (0.2, 0.2, 0.2)),
    "CTRL_Right_Leg_02": ("Circle_Thin", (0.16, 0.16, 0.16)),
    "CTRL_Right_Foot": ("Box_Thin", (0.18, 0.13, 0.1)),

    # Left front arm / foot
    "CTRL_Left_Shoulder": ("Circle_Thin", (0.2, 0.2, 0.2)),
    "CTRL_Left_Arm_01": ("Circle_Thin", (0.18, 0.18, 0.18)),
    "CTRL_Left_Arm_02": ("Circle_Thin", (0.14, 0.14, 0.14)),
    "CTRL_Left_Hand": ("Box_Thin", (0.16, 0.12, 0.1)),

    # Right front arm / foot
    "CTRL_Right_Shoulder": ("Circle_Thin", (0.2, 0.2, 0.2)),
    "CTRL_Right_Arm_01": ("Circle_Thin", (0.18, 0.18, 0.18)),
    "CTRL_Right_Arm_02": ("Circle_Thin", (0.14, 0.14, 0.14)),
    "CTRL_Right_Hand": ("Box_Thin", (0.16, 0.12, 0.1)),

    # Tree / feelers
    "CTRL_Feeler_01": ("Circle_Thin", (0.22, 0.22, 0.22)),
    "CTRL_Feeler_02": ("Circle_Thin", (0.18, 0.18, 0.18)),

    "CTRL_Feeler_A_01": ("Circle_Thin", (0.13, 0.13, 0.13)),
    "CTRL_Feeler_A_02": ("Circle_Thin", (0.1, 0.1, 0.1)),

    "CTRL_Feeler_B_01": ("Circle_Thin", (0.13, 0.13, 0.13)),
    "CTRL_Feeler_B_02": ("Circle_Thin", (0.1, 0.1, 0.1)),

    "CTRL_Feeler_C_01": ("Circle_Thin", (0.13, 0.13, 0.13)),
    "CTRL_Feeler_C_02": ("Circle_Thin", (0.1, 0.1, 0.1)),
}

def apply_shape_preset_to_profile(profile_path, shape_preset):
    profile = unreal.load_asset(profile_path)

    if profile is None:
        raise RuntimeError(f"Could not load profile: {profile_path}")

    controls = list(get_first_property(profile, ["controls", "Controls"], required=True))

    profile.modify()

    controls_by_name = {}

    for control_def in controls:
        control_name = str(
            get_first_property(
                control_def,
                ["control_name", "ControlName"],
                default=""
            )
        )

        if control_name:
            controls_by_name[control_name] = control_def

    updated_count = 0
    missing_count = 0

    for control_name, shape_data in shape_preset.items():
        if control_name not in controls_by_name:
            print(f"Missing control in profile: {control_name}")
            missing_count += 1
            continue

        shape_name = shape_data[0]
        shape_scale_tuple = shape_data[1]

        shape_offset_location = None
        shape_offset_rotation = None
        shape_color_tuple = None

        if len(shape_data) >= 3:
            shape_offset_location = shape_data[2]

        if len(shape_data) >= 4:
            shape_offset_rotation = shape_data[3]

        if len(shape_data) >= 5:
            shape_color_tuple = shape_data[4]

        control_def = controls_by_name[control_name]

        set_first_property(
            control_def,
            ["shape_name", "ShapeName"],
            shape_name,
            required=True,
        )

        set_first_property(
            control_def,
            ["shape_scale", "ShapeScale"],
            unreal.Vector(*shape_scale_tuple),
            required=True,
        )

        # Optional visual shape offset.
        # This moves/rotates the visible control shape only.
        if shape_offset_location is not None or shape_offset_rotation is not None:
            shape_offset = unreal.Transform()

            if shape_offset_location is not None:
                shape_offset.set_editor_property(
                    "translation",
                    unreal.Vector(*shape_offset_location)
                )

            if shape_offset_rotation is not None:
                shape_offset.set_editor_property(
                    "rotation",
                    unreal.Rotator(*shape_offset_rotation).quaternion()
                )

            # Keep scale separate. ShapeScale owns scale.
            shape_offset.set_editor_property(
                "scale3d",
                unreal.Vector(1.0, 1.0, 1.0)
            )

            set_first_property(
                control_def,
                ["shape_offset", "ShapeOffset"],
                shape_offset,
                required=True,
            )

            if shape_color_tuple is not None:
                set_first_property(
                    control_def,
                    ["shape_color", "ShapeColor"],
                    unreal.LinearColor(*shape_color_tuple),
                    required=True,
                )

        updated_count += 1

    set_first_property(profile, ["controls", "Controls"], controls, required=True)

    unreal.EditorAssetLibrary.save_loaded_asset(profile)

    print("")
    print("Shape preset applied.")
    print(f"Updated: {updated_count}")
    print(f"Missing: {missing_count}")

    return {
        "updated": updated_count,
        "missing": missing_count,
    }
def apply_torterra_shape_preset():
    return apply_shape_preset_to_profile(
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/Animation/DA_CRBuild_Torterra.DA_CRBuild_Torterra",
        TORTERRA_SHAPE_PRESET,
    )

def make_scaled_shape_preset(shape_preset, multiplier):
    scaled_preset = {}

    for control_name, shape_data in shape_preset.items():
        shape_name = shape_data[0]
        scale_tuple = shape_data[1]

        scaled_scale = (
            scale_tuple[0] * multiplier,
            scale_tuple[1] * multiplier,
            scale_tuple[2] * multiplier,
        )

        # Preserve optional offset location, rotation, color, and any future fields.
        scaled_preset[control_name] = (
            shape_name,
            scaled_scale,
            *shape_data[2:],
        )

    return scaled_preset

def apply_torterra_shape_preset_small():
    return apply_shape_preset_to_profile(
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/Animation/DA_CRBuild_Torterra.DA_CRBuild_Torterra",
        make_scaled_shape_preset(TORTERRA_SHAPE_PRESET, .5),
    )

def build_control_rig_from_profile(profile_path, control_rig_path, control_rig_class_path):
    profile = unreal.load_asset(profile_path)
    control_rig_bp = unreal.load_asset(control_rig_path)

    if profile is None:
        raise RuntimeError(f"Could not load profile: {profile_path}")

    if control_rig_bp is None:
        raise RuntimeError(f"Could not load Control Rig: {control_rig_path}")

    hierarchy = control_rig_bp.hierarchy
    hierarchy_controller = control_rig_bp.get_hierarchy_controller()

    controls = get_first_property(profile, ["controls", "Controls"], required=True)

    control_rig_bp.modify()

    clear_generated_mappings_on_rig(control_rig_class_path)

    created_count = 0
    updated_count = 0
    failed_count = 0
    skipped_count = 0

    for control_def in controls:
        control_name = get_first_property(control_def, ["control_name", "ControlName"], required=True)
        bone_name = get_first_property(control_def, ["bone_name", "BoneName"], required=True)
        parent_control_name = get_first_property(control_def, ["parent_control", "ParentControl"], default=None)
        b_create_control = get_first_property(
            control_def,
            ["b_create_control", "create_control", "bCreateControl"],
            default=True,
        )

        if not b_create_control:
            print(f"Skipping {control_name}: Create Control is false.")
            skipped_count += 1
            continue

        if is_none_name(control_name):
            print("Skipping entry: ControlName is None.")
            skipped_count += 1
            continue

        if is_none_name(bone_name):
            print(f"Skipping {control_name}: BoneName is None.")
            skipped_count += 1
            continue

        try:
            settings = make_control_settings(control_def)
            local_rest_transform = get_control_local_rest_transform(hierarchy, control_def)

            existing_control_key = get_existing_control_key(hierarchy, control_name)

            if existing_control_key is not None:
                control_key = existing_control_key

                try:
                    hierarchy_controller.set_control_settings(control_key, settings, True)
                except Exception:
                    pass

                set_control_shape_transform_safe(
                    hierarchy,
                    control_key,
                    get_shape_transform_from_control_def(control_def),
                   )

                set_local_transform_safe(hierarchy, control_key, local_rest_transform)

                print(f"Updated control {control_name} to match local rest pose of bone {bone_name}.")
                updated_count += 1
                continue

            parent_key = make_empty_key()

            if not is_none_name(parent_control_name):
                existing_parent_key = get_existing_control_key(hierarchy, parent_control_name)

                if existing_parent_key is not None:
                    parent_key = existing_parent_key
                else:
                    print(
                        f"Warning: Parent control {parent_control_name} does not exist yet for {control_name}. "
                        "Creating with no parent."
                    )

            value = make_control_value(hierarchy)

            control_key = hierarchy_controller.add_control(
                str(control_name),
                parent_key,
                settings,
                value,
                True,
                False,
            )

            set_local_transform_safe(hierarchy, control_key, local_rest_transform)

            try:
                hierarchy_controller.set_control_settings(control_key, settings, True)
            except Exception:
                pass

            set_control_shape_transform_safe(
                hierarchy,
                control_key,
                get_shape_transform_from_control_def(control_def),
            )

            print(f"Created control {control_name} using local rest pose of bone {bone_name}.")
            created_count += 1

        except Exception as error:
            print(f"Failed on {control_name} for bone {bone_name}: {error}")
            failed_count += 1

    copy_generated_mappings_to_rig(profile, control_rig_class_path)

    unreal.EditorAssetLibrary.save_loaded_asset(control_rig_bp)

    print("")
    print("Control Rig build finished.")
    print(f"Created: {created_count}")
    print(f"Updated: {updated_count}")
    print(f"Skipped: {skipped_count}")
    print(f"Failed:  {failed_count}")

    return {
        "created": created_count,
        "updated": updated_count,
        "skipped": skipped_count,
        "failed": failed_count,
    }

def get_local_control_shape_transform_safe(hierarchy, control_key):
    attempts = [
        lambda: hierarchy.get_local_control_shape_transform(control_key, True),
        lambda: hierarchy.get_local_control_shape_transform(control_key, False),
        lambda: hierarchy.get_local_control_shape_transform(control_key),
    ]

    last_error = None

    for attempt in attempts:
        try:
            return attempt()
        except Exception as error:
            last_error = error

    raise RuntimeError(
        f"Could not get local control shape transform for {control_key}. Last error: {last_error}"
    )


def get_control_settings_safe(hierarchy_controller, control_key):
    attempts = [
        lambda: hierarchy_controller.get_control_settings(control_key),
    ]

    last_error = None

    for attempt in attempts:
        try:
            return attempt()
        except Exception as error:
            last_error = error

    raise RuntimeError(
        f"Could not get control settings for {control_key}. Last error: {last_error}"
    )


def get_transform_scale_safe(transform):
    try:
        return transform.get_editor_property("scale3d")
    except Exception:
        return transform.get_editor_property("scale")


def make_shape_offset_without_scale(shape_transform):
    shape_offset = unreal.Transform()

    shape_offset.set_editor_property(
        "translation",
        shape_transform.get_editor_property("translation")
    )

    shape_offset.set_editor_property(
        "rotation",
        shape_transform.get_editor_property("rotation")
    )

    shape_offset.set_editor_property(
        "scale3d",
        unreal.Vector(1.0, 1.0, 1.0)
    )

    return shape_offset


def sync_control_rig_shapes_to_profile(profile_path, control_rig_path):
    profile = unreal.load_asset(profile_path)
    control_rig_bp = unreal.load_asset(control_rig_path)

    if profile is None:
        raise RuntimeError(f"Could not load profile: {profile_path}")

    if control_rig_bp is None:
        raise RuntimeError(f"Could not load Control Rig: {control_rig_path}")

    hierarchy = control_rig_bp.hierarchy
    hierarchy_controller = control_rig_bp.get_hierarchy_controller()

    controls = list(get_first_property(profile, ["controls", "Controls"], required=True))

    controls_by_name = {}

    for control_def in controls:
        control_name = str(
            get_first_property(
                control_def,
                ["control_name", "ControlName"],
                default=""
            )
        )

        if control_name:
            controls_by_name[control_name] = control_def

    profile.modify()

    updated_count = 0
    skipped_count = 0

    for control_key in hierarchy.get_controls():
        control_name = get_key_name(control_key)

        if control_name not in controls_by_name:
            print(f"Skipping {control_name}: not found in profile.")
            skipped_count += 1
            continue

        control_def = controls_by_name[control_name]

        try:
            settings = get_control_settings_safe(hierarchy_controller, control_key)
            shape_transform = get_local_control_shape_transform_safe(hierarchy, control_key)

            shape_name = settings.get_editor_property("shape_name")
            shape_color = settings.get_editor_property("shape_color")
            shape_scale = get_transform_scale_safe(shape_transform)
            shape_offset = make_shape_offset_without_scale(shape_transform)

            set_first_property(
                control_def,
                ["shape_name", "ShapeName"],
                shape_name,
                required=True,
            )

            set_first_property(
                control_def,
                ["shape_scale", "ShapeScale"],
                shape_scale,
                required=True,
            )

            set_first_property(
                control_def,
                ["shape_offset", "ShapeOffset"],
                shape_offset,
                required=True,
            )

            set_first_property(
                control_def,
                ["shape_color", "ShapeColor"],
                shape_color,
                required=True,
            )

            print(f"Synced shape for {control_name}: {shape_name}, scale={shape_scale}")
            updated_count += 1

        except Exception as error:
            print(f"Failed to sync shape for {control_name}: {error}")
            skipped_count += 1

    set_first_property(profile, ["controls", "Controls"], controls, required=True)

    unreal.EditorAssetLibrary.save_loaded_asset(profile)

    print("")
    print("Control Rig shapes synced back to profile.")
    print(f"Updated: {updated_count}")
    print(f"Skipped: {skipped_count}")

    return {
        "updated": updated_count,
        "skipped": skipped_count,
    }


def sync_torterra_shapes_to_profile():
    return sync_control_rig_shapes_to_profile(
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/Animation/DA_CRBuild_Torterra.DA_CRBuild_Torterra",
        "/Game/Assets/Pokemon/Placeholder/PM0389_Torterra/CR_Torterra.CR_Torterra",
    )