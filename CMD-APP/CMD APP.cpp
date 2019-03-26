// CMD APP.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "CmdApp.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

CMDAPP_API void clear_screen()
{
	system("CLS");
	//pwd();
}

CMDAPP_API 