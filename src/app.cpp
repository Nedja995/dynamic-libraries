#include <iostream>
#include <windows.h>
#include "app.h"


//#include "lib.h"

//#include "MathFuncsDll.h"

using namespace std;

App::App(int& argc, char** argv) 
{
	
}

App::~App()
{
}

int App::Execute()
{
	typedef int(*AddFunc)(int, int);
	typedef void(*FunctionFunc)();
	AddFunc _AddFunc;
	FunctionFunc _FunctionFunc;
	HINSTANCE hInstLibrary = LoadLibrary("FirstLibrarySH.dll");

	if (hInstLibrary)
	{
		_AddFunc = (AddFunc)GetProcAddress(hInstLibrary, "Add");
		_FunctionFunc = (FunctionFunc)GetProcAddress(hInstLibrary, "Function");

		if (_AddFunc)
		{
			std::cout << "23 = 43 = " << _AddFunc(23, 43) << std::endl;
		}
		if (_FunctionFunc)
		{
			_FunctionFunc();
		}

		FreeLibrary(hInstLibrary);
	}
	else
	{
		std::cout << "DLL Failed To Load!" << std::endl;
	}

	std::cin.get();

	return 0;
}
