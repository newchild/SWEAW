// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "Planet.h"
#include "CConsole.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	int prevCount = -1;
	int * Credits;
	Planet* selectedPlanet;
	switch(ul_reason_for_call)
	{
		
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:

		selectedPlanet = (Planet*)(0x6D1698);
		break;
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

