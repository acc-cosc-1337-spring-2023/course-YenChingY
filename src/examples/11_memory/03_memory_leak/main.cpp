#include "memory_leak.h"
#include <iostream>

using std::cout;

int main() 
{
	//call function 1 time
	memory_leak();
	int* nums = new int[3]{};
	cout<<nums[0]<<"\n";
	nums[0] = 5;
	cout<<nums[0]<<"\n";

	delete nums;
	
	//call function in a loop
	
	
	return 0;
}