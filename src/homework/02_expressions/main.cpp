﻿//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout; using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount = 0;
	double tip_rate = 0;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;

	double tax_amount = get_sales_tax_amount(meal_amount);
	
	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	double tip_amount = get_tip_amount(meal_amount, tip_rate);
	double total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";
	

	return 0;
}
