#include "memory_leak.h"
#include <iostream>

using std::cout;

int main() 
{
	//use_dynamic_memory_array(3);
	//limit_dynamic_memory_scope(3);
	cout<<"load to stack\n";
	use_dynamic_array(3);
	cout<<"unload from stack\n";
	
	return 0;
}