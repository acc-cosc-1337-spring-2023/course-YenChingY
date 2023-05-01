//checking_account.h
#include<iostream>
#include "bank_account.h"

//Need to include header guard everytime when writing the class
#ifndef CHECKING_ACCOUNT_H//if not define
#define CHECKING_ACCOUNT_H//define it


class CheckingAccount: public BankAccount //inherit from BankAccount
{
public:
    CheckingAccount(){};//default constructor
    CheckingAccount(int b) : BankAccount(b){}
    int get_balance()const override{return balance;}

};

#endif//end of if

//class string
//{
//public:
//    int length(){return size;}
//private:
//    char * sequence;
//    int size;
//};

//class Vector
//{
//public:
//    int size(){return size;}
//private:
//    int* elements;
//    int size;
//};