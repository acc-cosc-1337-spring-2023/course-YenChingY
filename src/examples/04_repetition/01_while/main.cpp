#include "while.h"
#include<iostream>

using std::cin; using std::cout;
using std::string;

int main() 
{
	auto num = 0;
	auto choice = 'n';

	do
	{
		cout<<"Enter a number :";
		cin>>num;

		auto result = sum_of_squares(num);
		cout<<"Sum of squares: "<<result<<"\n";

		cout<<"Continue, enter y...: ";
		cin>>choice;
	} 
	while (choice == 'y' || choice == 'Y');
	
	
	string name = "Hello";
	display(name);


	return 0;
}