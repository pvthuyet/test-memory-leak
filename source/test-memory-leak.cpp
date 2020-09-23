// test-memory-leak.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>

void CALLBACK TestMemoryLeak(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
{
	int * x = new int(1);
	std::cout << "hello\n";
	system("pause");
}