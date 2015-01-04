#include <iostream>

#pragma comment(lib, "..\\Debug\\lib_demo.lib")

extern int Add(int a, int b);

int main()
{
    int a = 2;
    int b = 3;
    std::cout << Add(a, b) << std::endl;

    return 0;
}