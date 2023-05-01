#include<iostream>
#include<string>
#include "func.h"

using std::cout; using std::cin;
using std::string;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto choice = 'y';
    auto option = 0;
    string dna = "";

    do
    {
        do
        {
            cout<<"\nDNA String Menu\n";
            cout<<"1-Get GC Content\n";
            cout<<"2-Get DNA Complement\n";
            cout<<"3-Exit\n";
            cout<<"\nEnter menu option: ";
            cin>>option;

            if(option == 1)
            {
            cout<<"Enter a DNA string: ";
            cin>>dna;
            cout<<get_gc_content(dna)<<"\n";
            }
            else if(option == 2)
            {
            cout<<"Enter a DNA string: ";
            cin>>dna;
            cout<<get_dna_complement(dna)<<"\n";
            }
            else if (option == 3)
            {
            cout<<"Are you sure you want to exit: (y/n):  \n";
            cin>>choice;
            }
            /*else
            {
            cout<<"\nInvalid option. Please select from 1-3 \n";
            cout<<"\nDNA String Menu\n";
            cout<<"1-Get GC Content\n";
            cout<<"2-Get DNA Complement\n";
            cout<<"3-Exit\n";

            cout<<"\nEnter menu option: ";
            cin>>option;

            //run_menu();
            }*/
        } while (option != 3);
        
    }
    while(choice != 'y' && choice != 'Y');
	cout<<"Bye...\n";




	return 0;
}