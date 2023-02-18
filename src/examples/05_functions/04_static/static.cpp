#include "static.h"

using std::cout;

void use_static_var()
{
    static int num = 0;//if not include static, the reslut will show num++
    num++;
    cout<<num<<"\n";
}