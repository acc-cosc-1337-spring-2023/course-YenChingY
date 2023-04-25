//
#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int size);
    Vector(const Vector& v);//copy constructor: Rule 1 of 3 in legacy c++
    Vector& operator=(const Vector& v); //copy assignment Rule 2 of 3 in legacy c++
    Vector(Vector&& v);//move constructor Rule 4 of 5 for modern c++ (C++11 and up)
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index) const{return elements[index];}
    ~Vector();//Rule 3 of 3 in legacy c++

private:
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements
    int* elements;//holds the dynamic list on the heap
};

#endif
void use_vector();
Vector get_vector();