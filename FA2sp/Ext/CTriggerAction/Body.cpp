#include "Body.h"

#include <GlobalVars.h>

#include "../../Helpers/STDHelpers.h"
#include "../../Helpers/Translations.h"

void CTriggerActionExt::ProgramStartupInit()
{
	RunTime::ResetMemoryContentAt(0x597A2C, &CTriggerActionExt::OnInitDialogExt, 4);
}

BOOL CTriggerActionExt::OnInitDialogExt()
{
	BOOL ret = this->CTriggerAction::OnInitDialog();
	if (!ret)
		return FALSE;

	auto TranslateDlgItem = [this](int nID, const char* lpKey)
	{
		ppmfc::CString buffer;
		if (Translations::GetTranslationItem(lpKey, buffer))
			this->SetDlgItemText(nID, buffer);
	};

	auto TranslateCItem = [](CWnd* pWnd, const char* lpKey)
	{
		ppmfc::CString buffer;
		if (Translations::GetTranslationItem(lpKey, buffer))
			pWnd->SetWindowText(buffer);
	};

	TranslateDlgItem(50600, "TriggerActionCurrent");
	TranslateDlgItem(50601, "TriggerActionOptions");
	TranslateDlgItem(50602, "TriggerActionType");
	TranslateDlgItem(50603, "TriggerActionParameter");
	TranslateDlgItem(50604, "TriggerActionParamValue");
	TranslateDlgItem(50605, "TriggerActionDesc");

	TranslateDlgItem(1403, "TriggerActionNew");
	TranslateDlgItem(1174, "TriggerActionDel");

	return TRUE;
}

BOOL CTriggerActionExt::PreTranslateMessageExt(MSG* pMsg)
{
	switch (pMsg->message) {

	default:
		break;
	}
	return this->FA2CDialog::PreTranslateMessage(pMsg);
}