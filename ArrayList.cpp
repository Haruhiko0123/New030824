#include <iostream>
#include "ArrayList.h"
using namespace std;

template <typename T> ArrayList<T>::ArrayList(){
    capacity = 4;
    a = new T[capacity];
    count = 0;
    // for (int i = 0; i < capacity; i++){
    //     a[i] = 0;
    // }
}

template <typename T> void ArrayList<T>::addItem( T num){
    a[count++] = num;
}

template <typename T> void ArrayList<T>::printList(){
    for(int i = 0; i<count; i++){
        cout << a[i] << endl;
    }
}

template <typename T> T ArrayList<T>::getItem(int index){
    if (index < 0 || index > count+1) {
        throw out_of_range("");
    }
    else{
        return a[index];
    }
}


template <typename T> T ArrayList<T>::pop(){
    //Removes the last element of the list

    int lastCount;
    T result;

    if (count == 0){
        throw out_of_range("List is empty");
        //return 0;  // Or throw exception.
    }
    else{
        lastCount = count -1;
        result = a[lastCount];
        count--;
        return result;
    }
}

template <typename T> T ArrayList<T>::pop(int index){

    T result;

    if (index < 0 || index >=count){
        throw out_of_range("Out of Bounds");
    }
    result = a[index];
    for (int i = index; i< count; i++){
        a[i] = a[i+1];
    }
    count --;
    return result;


}

template <typename T> int ArrayList<T>::getCount(){
    return count; 
}

template <typename T> void ArrayList<T>::grow (){
    int* old = a; 
    a = new int[capacity*2];
    for (int i = 0; i <count; i ++){
        a[i] = old[i];
    }
    capacity *=2;

    delete old;

}