#include<iostream>
#include"list.h"
using namespace std;

list::list(){
    first = NULL;
    length = 0;
}

list::list(int array[], int len){
    first = new node;
    length = len;
    node *p = first;
    first -> data = 0;
    first -> next = NULL;
    node *newNode;
    for(int i = 0; i < len; ++i){
        newNode = new node;
        newNode -> data = array[i];
        newNode -> next = p -> next;
   	p -> next = newNode;
        p = newNode;
    }
}

list::~list(){
    node *p;
    while(first != NULL){
	p = first -> next;
        delete first;
        first = p;
    }
}

void list::print(){
    node *p = first -> next;
    while(p != NULL){
	cout << p -> data;
        p = p -> next;
    }
}
bool list::insert(int pos, int num){
    if(pos < 1 || pos > length + 1)
        return false;
    int index = 1;
    node *p = first;
    while(index < pos){
        ++index;
        p = p -> next;
    }
    node *q = new node;
    q -> data = num;
    q -> next = p -> next;
    p -> next = q;
    ++length;
    return true;
}

bool list::remove(int pos){
    if(pos < 1 || pos > length)
        return false;
    int index = 1;
    node *p = first, *q;
    while(index < pos){
	++index;
        p = p -> next;
    }
    q = p -> next;
    p -> next = q -> next;
    delete q;
    --length;
    return true;
}
