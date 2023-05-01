//write include statements
#include "decisions.h"
#include<iostream>

using std::cout; using std::cin;

int main() 
{
	auto option = 0;
	auto grade = 0;

	cout<<"MAIN MENU\n"<<"\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n"<<"\n";
	cout<<"Enter menu option: \n";
	
	cin>>option;

	if(option == 1)
	{
		cout<<"Enter your score(from 0-100): ";
		cin>>grade;
		auto result = get_letter_grade_using_if(grade);
		cout<<result<<"\n";
	}

	else if(option == 2)
	{
		cout<<"Enter your score(from 0-100): ";
		cin>>grade;
		auto result = get_letter_grade_using_switch(grade);
		cout<<result<<"\n";
	}

	else if(option == 3)
	{
		cout<<"Bye\n";
	}
}


	


	//{
	//	
	//}	

	//
	//cout>>get_letter_grade_using_switch(grade)<<"\n";

    //std::string switch(option)
	//std::string result;

    //{
        //Case 1:
		//	auto grade = 0;
        //    result = get_letter_grade_using_if();
        //    break;
        //case 2:
        //    result = get_letter_grade_using_switch();
        //    break;
        //case 3:
        //    result = "Exit"
        //   break;
    //}

	