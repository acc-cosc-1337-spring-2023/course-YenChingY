#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	auto num = 5, num1 = 10;
	int &num_ref = num;//num_ref reference the address of num

	cout<<"Num address is: "<<&num<<"\n";
	cout<<"Address that num_ref referances: "<<&num_ref<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value that num_ref references: "<<num_ref<<"\n\n";

	num_ref = num1;//num_ref value of 5 was changed to 10

	cout<<"Value that num_ref reference: "<<num_ref<<"\n";
	cout<<"Address that num_ref referances: "<<&num_ref<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n\n";
	

	///pointers store the address of a variable
	int *num_ptr = &num;//create and assign address to pointer //point to the memory of num
	cout<<"Num address is: "<<&num<<"\n";
	cout<<"Address num_ptr points to:"<<num_ptr<<"\n";//if want to get the address of pointer, use pointer name.
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";//if want to get the value, use the* sign. 	//get the address of the value that you points to
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n\n";

	*num_ptr = 10;//work with the value of that pointers points to
	cout<<"Num value: "<<num<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n\n";

	num_ptr = &num1;//assign address to point to //point to the address of variable
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value at address that num_ptr points to: "<<*num_ptr<<"\n";

	int *num_ptr1 = &num;

	
	return 0;
}