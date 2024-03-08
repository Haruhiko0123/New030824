#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList initialize(){
    LinkedList ll;
    ll.count = 0;
    ll.start = NULL;
    ll.end = NULL;
    return ll;           ///This is what I forgot
}

void addItem(LinkedList &ll, int item){
    node  *newnode = new node;
   // newnode.value = item;  // illegal
   //(*newnode).value = item;  // legal but ugly
    newnode->value = item;   // somewhat nice -> means pointer!
    if (ll.count == 0){
        ll.start = newnode;
        ll.end = newnode;
    }
    else{
        ll.end->next  = newnode;
        ll.end = newnode;
    }
    ll.count ++;
}


void printList(LinkedList ll){
    node *p;
    p = ll.start;
    while (p != NULL){
        cout << p->value << endl;
        p = p->next;
    }
}



int getItem(LinkedList ll, int index){
    node *p;
    p = ll.start;
    if (index < 0 || index >=ll.count){
        throw out_of_range("");
    } 

    for (int i = 0; i < index; i++){
        p = p->next;
    }

    return p->value;
}
void insertItem(LinkedList &ll, int item, int index){
    node *p;
    p = ll.start;

    if (index < 0 || index >ll.count){
        throw out_of_range("");
    } 
    node  *newnode = new node;
    newnode->value = item;   

    if (index ==0){
        newnode->next = ll.start;
        ll.start  = newnode;
    }
    else if (index == ll.count){
        ll.end->next = newnode;
        ll.end = newnode;
        ll.end->next = NULL;
    }
    else{
        for (int i = 0; i < index-1; i++){
            p = p->next;
        }

        newnode->next = p->next;
        p->next = newnode;
    }

    ll.count++;

}
// int pop(LinkedList &ll);
// int pop(LinkedList &ll, int index);
// void remove(LinkedList &ll, int item);