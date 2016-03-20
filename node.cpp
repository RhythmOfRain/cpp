#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

int main(){
	
	node *head = new node;
	node *p;
	head->data = -1;
	head->next = NULL;
	p = head;
	int i;
	int j = 0;
	while(cin >> i){
		node *newNode = new node;
        newNode->next = p->next;
		newNode->data = i;
        p->next = newNode;
        p = newNode;		
	}
	p = head->next;
	while(p != NULL){
		cout<<p->data<<' ';
		p = p->next;	
	}
    node *pNext, *pNextNext;
	if(head->next == NULL){
		cout<<"only one element\n";
		return 0;
	}
	p = head->next;
	pNext = p->next;
	p->next = NULL;
	while(pNext != NULL){
		pNextNext = pNext->next;
		pNext->next = p;
		p = pNext;
		pNext = pNextNext;
	}
	cout << endl;
	head -> next = p;
	p = head -> next;
	while(p != NULL){
		cout<<p->data<<' ';
		p = p->next;	
	}
	cout << endl;
	int count = 0;
	p = head -> next;
	while(p != NULL){
		++count;
		p = p -> next;
	}
	cout<<"count = "<<count<<endl;
	int insertPos = 2, insertNum = 10;
	//cin >> insertPos >> insertNum;
	count = 1;
	p = head -> next;
	while(count < insertPos){
		p = p -> next;
	    ++count;
	}
	node *insertNode = new node;
	insertNode -> data = insertNum;
	insertNode -> next = p -> next;
	p -> next = insertNode;
	p = head -> next;
	while(p != NULL){
		cout<< p -> data<<' ';
		p = p -> next;
	}
	
	return 0;
	
}