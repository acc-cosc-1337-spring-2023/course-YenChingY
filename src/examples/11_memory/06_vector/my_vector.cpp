#include "my_vector.h"

using std::cout;
//
Vector::Vector(int size)
    :capacity{0}, elements{new int[size]}
{
    cout<<"created new memory at "<<elements<<"\n";
};

Vector::~Vector()
{
    cout<<"delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector()
{
    Vector v(3);
}
