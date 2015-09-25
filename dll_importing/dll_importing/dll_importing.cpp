// dll_importing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "dll_exporting.h"
#include "dll_exporting2.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	a=add(1,1);
	sai();
	cout<<"a="<<a<<endl;


	return 0;
}

