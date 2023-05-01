#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

class ArrayList
{
public:
    ArrayList(int* list, const int capacity);
    int Capacity() const{return capacity;}
    int Size() const{return current_index;}
    void Add(int value);
    int Get_First_Index_Of(int value);
    int Get_value_at_Index(int index);
    void Delete(int value);

private:
    int current_index{0};
    int capacity;
    int* elements;
    void AdjustElements(int index);
};

#endif