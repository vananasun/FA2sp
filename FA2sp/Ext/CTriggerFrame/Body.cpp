#include "Body.h"

CTriggerFrame* CTriggerFrameExt::Instance = nullptr;

void CTriggerFrameExt::ProgramStartupInit()
{
	Logger::Debug(__FUNCTION__"\n");
	auto PreTranslateAddr = &CTriggerFrameExt::PreTranslateMessageHook;

	RunTime::ResetMemoryContentAt(0x594D60, &PreTranslateAddr, sizeof(PreTranslateAddr));
}

BOOL CTriggerFrameExt::PreTranslateMessageHook(MSG* pMsg)
{
	switch (pMsg->message) {

	default:
		break;
	}
	return this->FA2CDialog::PreTranslateMessage(pMsg);
}