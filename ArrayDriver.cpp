#include <iostream>
#include "ArrayList.h"

using namespace std;

int main(){
    int item;

    ArrayList<int> myAL;
    myAL.addItem(5);
    myAL.addItem(8);
    myAL.addItem(3);
    myAL.addItem(6);
    myAL.addItem(9);
    

    cout << "Count " <<myAL.getCount() << endl;
    myAL.printList();
    item = myAL.pop(4);
    cout << "Popped: " <<item <<endl;
    cout <<"The list is now:" <<endl;
    myAL.printList();


    ArrayList<string> myAL2;
    myAL2.addItem("This");
    myAL2.addItem("is");
    myAL2.addItem("awesome");
    myAL2.printList();



}
