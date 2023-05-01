//atm.cpp
#include "atm.h"

using std::cout; using std::cin; using std::vector;


void display_menu()
{
    cout<<"\n\nACC COSC Bank\n\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(ATMData& atm_data)
{
    vector<Customer>& customers =  atm_data.get_customers();
    auto option = 0;
    auto choice = 0;

    do
    {
        cout<<"\nEnter value to scan card: ";
        cin>>choice;

        auto customer_index = scan_card(customers.size());
        auto& customer = customers[customer_index]; 

        cout<<"Checking(1) or Savings(2): ";
        cin>>choice;

        std::unique_ptr<BankAccount> &account = customer.get_account(choice - 1);


        do
        {
            display_menu();
            cout<<"Enter menu option: ";
            cin>>option;
            handle_menu_option(option, account);
            if(option == 4)
            {
                atm_data.save_customers(customers);
            }
        } 
        while (option != 4);
    }
    while(true);    
}

void handle_menu_option(int option, std::unique_ptr<BankAccount> &account)
{
    auto amount = 0;

    switch(option)
    {
    case 1:
        cout<<"Enter deposit amount: ";
        cin>>amount;
        account->deposit(amount);
        break;
    case 2:
        cout<<"Enter withdraw amount: ";
        cin>>amount;
        account->withdraw(amount);
        break;
    case 3:
        cout<<"Balance: ";
        cout<<account->get_balance()<<"\n";
        break;
    case 4:
        cout<<"\nExiting...\n";
        break;
    default:
        cout<<"Invalid option...";

        break;

    }
}

int scan_card(int max_value)
{
    return rand() % max_value;
}