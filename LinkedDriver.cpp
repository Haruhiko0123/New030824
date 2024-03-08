#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList myList;

    myList = initialize();
    //addItem(myList, 5);
    //addItem(myList, 10);
    //addItem(myList, 20);

    printList(myList);
    cout <<endl;

    cout << "Testing getItem"<<endl;
    //int x = getItem(myList, 3);
    //cout << x <<endl;

    cout << "Testing Insert"  <<endl;

    insertItem(myList, 1,0);
    printList(myList);
    insertItem(myList, 2,1);
    //insertItem(myList, 8,3);
    printList(myList);

    return 0;
}