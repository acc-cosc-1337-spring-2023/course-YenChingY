#include "ref_pointers.h"

//
void ref_ptr_params(int &num1, int *num2)
{
    num1 = 10;
    *num2 = 20; //when working with value, use * sign
                //change the value of variable that num2 points to
}

