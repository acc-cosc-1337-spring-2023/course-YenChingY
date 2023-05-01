#include "void.h"
#include <iostream>

using std::cout;

int num = 100;//global variable stored in global memory

int main()
{
    cout<<"Global variable num: "<<num<<"\n";
    int num = 50;
    //void_param(num);
    cout<<"Local main variable num: "<<num<<"\n";

    return 0;
}