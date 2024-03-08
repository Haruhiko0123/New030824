#ifndef __ArrayList__h
#define __ArrayList__h


template <typename T>
class ArrayList{
    public:
        ArrayList();
        void addItem(T num);
        void printList();
        T getItem(int index);
        T pop();
        T pop(int index);
        void remove(T item);
        int getCount();

    private:
        T* a;
        int count;
        int capacity;
        void grow(); 
};


#include "ArrayList.cpp"

#endif