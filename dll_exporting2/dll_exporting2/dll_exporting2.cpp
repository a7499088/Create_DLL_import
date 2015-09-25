// dll_exporting2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "dll_exporting2.h"
#include "iostream"


// This is an example of an exported variable
DLL_EXPORTING2_API int ndll_exporting2=0;

// This is an example of an exported function.
DLL_EXPORTING2_API int fndll_exporting2(void)
{
	return 42;
}
DLL_EXPORTING2_API int add(int a,int b)
{
	return a+b;
}
DLL_EXPORTING2_API void sai()
{
	std::cout<<"LOL "<<std::endl;
}


// This is the constructor of a class that has been exported.
// see dll_exporting2.h for the class definition
Cdll_exporting2::Cdll_exporting2()
{
	return;
}
