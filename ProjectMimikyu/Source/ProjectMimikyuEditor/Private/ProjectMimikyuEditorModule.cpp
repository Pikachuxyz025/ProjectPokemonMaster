#include "ProjectMimikyuEditorModule.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "PokePal/UI/SPokePalMainPanel.h"

namespace PokePal
{
	static const FName TabName(TEXT("PokePal"));

	static TSharedRef<SDockTab> SpawnTab(const FSpawnTabArgs& )
	{
		return SNew(SDockTab).TabRole(ETabRole::NomadTab)
			[
				SNew(SPokePalMainPanel)
			];
	}
}

void FProjectMimikyuEditor::StartupModule()
{
	FGlobalTabmanager::Get()
		->RegisterNomadTabSpawner(
			PokePal::TabName,
			FOnSpawnTab::CreateStatic(&PokePal::SpawnTab))
		.SetDisplayName(FText::FromString(TEXT("PokéPal")))
		.SetTooltipText(FText::FromString(TEXT("Open the PokéPal editor assistant.")));
}

void FProjectMimikyuEditor::ShutdownModule()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(PokePal::TabName);
}

IMPLEMENT_MODULE(FProjectMimikyuEditor, ProjectMimikyuEditor)