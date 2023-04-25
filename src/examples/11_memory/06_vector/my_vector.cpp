#include "my_vector.h"

using std::cout;
//
Vector::Vector(int size)
    :capacity{size}, elements{new int[size]}
{
    cout<<"created new memory at "<<elements<<"\n";
};

Vector::Vector(const Vector& v)
 : size{v.size}, capacity{v.capacity}, elements{new int[v.capacity]}
{
    cout<<"Copy constructor = created memory at "<<elements<<"\n";
    for(auto i = 0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to teporary memory
5-Set v1.size to v.size
6-Return a referance to itself
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i < v.size; i++)
    {
        temp[i] = v.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    cout<<"copy assignment new memoery created "<<elements<<"\n";
    temp = nullptr;
    size = v.size;

    return *this;//this is class itself in memory
}

Vector::~Vector()
{
    cout<<"delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector()
{   /*
    //recommended usage of my vector
    cout<<"loaded to the stack\n";
    Vector v(3);
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read

    //cout<<"unloaded from the stack\n";
    //more code here*/

    //04/24/23
    Vector v(3);//calls constuctor with int paraneter
    Vector v1 = v;//calls copy constructor
}

Vector get_vector()
{
    Vector v1(3);
    return v1;
}
