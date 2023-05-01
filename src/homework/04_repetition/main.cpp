//write include statements
#include<iostream>
#include<string>
#include "dna.h"

//write using statements
using std::cout; using std::cin;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto choice = 'a';

    do
    {
		auto option = 0;
		cout<<"1-Factorial"<<"\n";
		cout<<"2-Greatest Common Divisor"<<"\n";
		cout<<"3-Exit"<<"\n";
		cout<<"Enter menu option: ";
		cin>>option;

		if(option == 1)
		{
			auto num = 0;
			cout<<"\nEnter an integer: ";
			cin>>num;
			auto result = factorial(num);
			cout<<"The factorial is: "<<result<<"\n\n";
		}

		else if(option == 2)
		{
			auto num1 = 0;
			auto num2 = 0;
			//auto result = 0;
			cout<<"\nEnter the first number: ";
			cin>>num1;
			cout<<"Enter the second number: ";
			cin>>num2;
			auto result = gcd(num1, num2);
			cout<<"The Greatest Common Divisor is: "<<result<<"\n\n";
		}

		else if(option == 3)
		{
			cout<<"Are you sure you want to exit? (y/n): ";
			cin>>choice;
			cout<<choice<<"\n\n";
		}

		else
		{
			cout<<"Invalid option"<<"\n";
			break;
		}
    }
    while(choice != 'Y' && choice != 'y');
	cout<<"Bye"<<"\n";
	
	return 0;
}