#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class STextBlock;

class SPokePalMainPanel : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPokePalMainPanel)
		{ }
		SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

private:
	void HandleEditorContextChanged();
	void RefreshEditorContextText();

	TSharedPtr<STextBlock> EditorContextTextBlock;
};
