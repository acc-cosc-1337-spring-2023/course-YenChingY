//add include statements
#include "dna.h"
#include<iostream>

using std::cout;
//add function(s) code here

int factorial(int num)
{
    auto sum = 1;

    while(num > 0)
    {
        sum = sum * num; 
        num--;
    }
    return sum;
}

int gcd(int num1, int num2)
{
	while(num1 != num2)
	{
		auto temp = 0;
		if(num1 < num2)
        {
            temp = num1; //do option 1
            num1 = num2;
            num2 = temp;
		}	
		else if(num1 > num2)
		{
			num1 = num1 - num2;	//do option 2
		}

	}
	//cout<<"complete"<<"\n";
	return num1; 

}
