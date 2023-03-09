#include<iostream>
#include<time.h>
#include<vector>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout; using std::cin;
using std::vector;

int main()
{
	srand(time(NULL));//generate true randoms on each main run execution
	vector<BankAccount*> accounts;
	SavingsAccount savings;
	CheckingAccount checking;
	accounts.push_back(&savings);
	accounts.push_back(&checking);

	run_menu(accounts);

	//bank_account = &savings;
	//cout<<bank_account->get_balance()<<"\n";//must use arrow ->operator

	//CheckingAccount account;//customer 1
	
	/*
	auto choice = 's';

	cout<<"Use checking or savings?";
	cin>>choice;

	if(choice == 'c')
	{
		cout<<account;
		cout<<account.get_balance()<<"\n";
		show_balance(account);//use the friend free function
		run_menu(account);
	}
	else
	{
		cout<<savings;
		cout<<savings.get_balance()<<"\n";
		show_balance(savings);//use the friend free functio
		run_menu(savings);
	}


	
	cout<<account.get_balance()<<"\n";
	
	
	//cout<<"Balance: "<<account.get_balance()<<"\n";
	//CheckingAccount account1(100);//customer 2 for initial balance
	//cout<<"Balance: "<<account1.get_balance()<<"\n";
	*/

	return 0;
}