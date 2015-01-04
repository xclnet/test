// standard lib
#include <iostream>

// system lib
#include "windows.h"

int main()
{
    typedef int (* PFuncAdd)(int, int);

    HINSTANCE hdll = LoadLibrary(L"..\\Debug\\dll_demo.dll");
    PFuncAdd func_add = (PFuncAdd)GetProcAddress(hdll, "Add");

    std::cout << func_add(2, 3) << std::endl;

    return 0;
}

