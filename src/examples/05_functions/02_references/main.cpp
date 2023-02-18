#include<iostream>

using std::cout;

int main()
{
    auto num = 10;
    auto num1 = 50;
    
    int &num_ref = num;//num_ref is a reference variable; holds the stack address of num

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address of num: "<<&num<<"\n"; //& is memory operator

    cout<<"Num via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address of num_ref points to: "<<&num_ref<<"\n";

    num_ref = 20;
    cout<<"Num is: "<<num<<"\n";
    cout<<"Num via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address of num_ref points to: "<<&num_ref<<"\n";

    num_ref = num1;

    cout<<"Num is: "<<num<<"\n";
    cout<<"Num via num_ref is: "<<num_ref<<"\n";
    cout<<"Stack address of num_ref points to: "<<&num_ref<<"\n";




    return 0;
}