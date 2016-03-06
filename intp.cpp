#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int **p;
	p = new int*[4];
	for(int i = 0; i < 4; ++i){
	    p[i] = new int[5];
		for(int j = 0; j < 5; ++j)
			cin >> p[i][j];
    }
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 5; ++j)
			printf("%-3d",p[i][j]);
		cout<<endl;
    }
	for (int i = 0; i < 4; i++)
                 delete []p[i];
    delete []p;
	return 0;
}