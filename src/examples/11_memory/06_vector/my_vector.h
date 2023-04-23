//
#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(int size);
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    ~Vector();

    //int& operator[](int index){return elements[index];}
    //int& operator[](int index) const{return elements[index];}

private:
    int* elements;//holds the dynamic list on the heap
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements
};

#endif
void use_vector();