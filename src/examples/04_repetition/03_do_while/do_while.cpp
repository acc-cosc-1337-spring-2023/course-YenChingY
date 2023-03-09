//do while loop excute at least one time and check the condition
#include "do_while.h"

using std::cin; using std::cout;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'n';

    do
    {
        cout<<"Enter y to continue, any other key to exit: ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
}

void display_menu()
{
    cout<<"ACC do while menu\n";
    cout<<"1-Customer\n";
    cout<<"2-Vendor\n";
    cout<<"3-Payroll\n";
    cout<<"4-Exit\n";
}


void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"\nEnter menu option: \n";
        cin>>option;

        handle_menu_option(option);
    } 
    while(option != 4);    
}

void handle_menu_option(int num)
{
    switch(num)
    {
    case 1:
        cout<<"\nSelected Customer option: \n";
        break;
    case 2:
        cout<<"\nSelected Vendor option: \n";
        break;
    case 3:
        cout<<"\nSelected Payroll option: \n";
        break;
    case 4:
        cout<<"\nSelected Exit option: \n";
        break;
    default:
        cout<<"\nInvalid option: \n";
        break;
    }
}

