#pragma once

#include <CMinimap.h>
#include "../FA2Expand.h"

class NOVTABLE CMinimapExt : public CMinimap
{
public:
	typedef BOOL(*FuncT_PTM)(MSG* pMsg);

	static CMinimap* Instance;

	//hook function to replace in virtual function map
	BOOL PreTranslateMessageHook(MSG* pMsg);

	static void ProgramStartupInit();

	CMinimapExt() {};
	~CMinimapExt() {};

private:

};