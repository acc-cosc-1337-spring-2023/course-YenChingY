#include "static.h"

using std::cout;

void use_static_var()
{
    static int num = 0;//if not include static, the reslut will show num++
    cout<<&num<<"\n";
    num++;
    cout<<num<<"\n";
}

void use_static_var1()
{
    static int num = 0;
    cout<<&num<<"\n";
    num++;
    cout<<num<<"\n";
}