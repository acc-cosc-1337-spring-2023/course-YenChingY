#include <iostream>
#include "void.h"

using std::cout;

void value_param(int num)
{
    num = 100;
}

void func_scope()
{
    int num = 10; //local variable --- function variable
    cout<<"Local function variable num: "<<num<<"\n";
}