//write include statement for decisions header
#include "decisions.h"

using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string result;
    
    if(grade >= 90 && grade <= 100)
    {
        result = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = "D";
    }
    else if(grade >=00 && grade <= 59)
    {
        result = "F";
    }
    else
    {
        result = "Invalid number. The number is out of range.";
    }
    return result;
}

string get_letter_grade_using_switch(int grade)
{
    string result;

    switch(grade)
    {
        case 90 ... 100:
            result = "A";
            break;
        case 80 ... 89:
            result = "B";
            break;
        case 70 ... 79:
            result = "C";
            break;
        case 60 ... 69:
            result = "D";
            break;
        case 00 ... 59:
            result = "F";
            break;
        default:
            result = "Invalid number. The number is out of range.";
            break;
        
    }
    return result;
}

//code from professor: dealing all the choice in cpp and just call run_menu() in main.
/*void display_menu()
{
    cout<<"1-Letter grade using if\n";
    cout<<"2-Letter grade using switch\n";
    cout<<"3-Exit\n";
}

void run_menu()
{
    auto choice = 0;
    string letter_grade;
    display_menu();
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice > 2)
    {
        cout<<"Invalid option\n";
        return;
    }

    handle_menu_option(choice);
}

void handle_menu_option(int choice)
{
    auto grade = 0;
    string letter_grade;

    cout<<"Enter grade: ";
    cin>>grade;

    if(choice == 1)
    {
        letter_grade = get_letter_grade_using_if(grade);
    }
    else if(choice == 2)
    {
        letter_grade = get_letter_grade_using_switch(grade);
    }

    cout<<letter_grade<<"\n";

}
*/