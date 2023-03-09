//checking_account.h
#include<iostream>
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount: public BankAccount //inherit from BankAccount
{
public:
    CheckingAccount(){};//default constructor
    CheckingAccount(int b) : BankAccount(b){}

};

#endif

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