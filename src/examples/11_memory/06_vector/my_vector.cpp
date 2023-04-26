#include "my_vector.h"

using std::cout;
//
Vector::Vector(int size)
 : capacity{size}, elements{new int[size]}
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

/*
1-Get v.elements memory(switch/steal the pointer making v empty)
2-Get size from v
3-point v.elements to nothing(set it to nullptr)
4-set v size to 0
*/
Vector::Vector(Vector&& v)
 : size{v.size}, elements{v.elements}
{
    cout<<"move constructor switch pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

/*
1-clear/delete original memory from v
2-point v1 elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
6-return a self reference
*/
Vector& Vector::operator=(Vector&& v)
{
    cout<<"Move assignment delete memory "<<elements<<"\n";
    delete[] elements;

    elements = v.elements;
    cout<<"Move assignment switch pointers "<<elements<<"\n";

    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
1-make sure that new size is greater than capacity
2-create temp memory of new_size allocation
3-copy values from old memoryto temp memory
4-delete the old memory
5-set elements to temp memory
6-set capacity to new_size
*/
void Vector::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    int* temp = new int[new_size];
    cout<<"Reserve new memory "<<temp<<"\n";

    for(auto i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Delete old memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

/*
1-if capacity is 0, call Reserve with reserve default size as function argument
2-else if size equal capacity, call Reserve with capacity * reserve default mutiplier
3-addd value to current elements[size]
4-increment the size
*/
void Vector::PushBack(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

Vector::~Vector()
{
    cout<<"delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector()
{   
    //recommended usage of my vector
    //cout<<"loaded to the stack\n";
    Vector v(3);
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read

    //cout<<"unloaded from the stack\n";
    //more code here*/

    //04/24/23
    //Vector v(3);//calls constuctor with int paraneter
    //Vector v1 = v;//calls copy constructor
}

Vector get_vector()
{
    Vector v(3);
    return v;
}
