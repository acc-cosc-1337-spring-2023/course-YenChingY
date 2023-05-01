//
#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H

template<typename T>
class Vector
{
public:
    Vector() = default;
    Vector(int size);
    Vector(const Vector<T>& v);//copy constructor: Rule 1 of 3 in legacy c++
    Vector<T>& operator=(const Vector<T>& v); //copy assignment Rule 2 of 3 in legacy c++
    Vector(Vector<T>&& v);//move constructor Rule 4 of 5 for modern c++ (C++11 and up)
    Vector<T>& operator=(Vector<T>&& v);//Rule 5 of 5 for modern c++
    int Size()const{return size;}
    int Capacity()const{return capacity;}
    void PushBack(T value);
    T& operator[](int index){return elements[index];}
    T& operator[](int index) const{return elements[index];}
    ~Vector();//Rule 3 of 3 in legacy c++

private:
    int size{0};//current size of the list; doubles as the current_index
    int capacity{0};//total available slots for elements
    T* elements{0};//holds the dynamic list on the heap
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);
};

#endif
void use_vector();
Vector<int> get_vector();
