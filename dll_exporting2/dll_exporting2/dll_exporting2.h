// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLL_EXPORTING2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLL_EXPORTING2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLL_EXPORTING2_EXPORTS
#define DLL_EXPORTING2_API __declspec(dllexport)
#else
#define DLL_EXPORTING2_API __declspec(dllimport)
#endif

// This class is exported from the dll_exporting2.dll
class DLL_EXPORTING2_API Cdll_exporting2 {
public:
	Cdll_exporting2(void);
	// TODO: add your methods here.
};

extern DLL_EXPORTING2_API int ndll_exporting2;

DLL_EXPORTING2_API int fndll_exporting2(void);
DLL_EXPORTING2_API int add(int a,int b);
DLL_EXPORTING2_API void sai();