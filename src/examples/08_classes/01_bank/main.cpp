#include<time.h>
#include<vector>
#include<iostream>
#include "atm.h"
#include "customer.h"
#include "atm_data.h"

using std::vector;

int main()
{
	srand(time(NULL));//generate true randoms on each main run execution

	ATMData data;

	run_menu(data);

	/*vector<unique_ptr<BankAccount>> accounts;//empty list
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>();
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>();//customer 0

	accounts.push_back(move(checking));//need to use move
	accounts.push_back(move(savings));

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";


	run_menu(accounts);*/

	//bank_account = &savings;
	//cout<<bank_account->get_balance()<<"\n";//must use arrow ->operator//dereference the pointer

	//CheckingAccount account;//customer 1
	
	/*
	auto choice = 's';

	cout<<"Use checking or savings?";
	cin>>choice;

	if(choice == 'c' || choice == 'C')
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