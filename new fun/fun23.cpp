#include<iostream>
using namespace std;

int main(){
	int i, j, k;
	for(i = 0; i <= 3; ++i){
		for(k = 1; k <= 3; ++k){
			for(j = 0; j <= 6; ++j){
				if(j >= 3 - i && j <= 3 + i)
					cout<<"*";
				else
					cout<<' ';		
			}
		}
		cout<<endl;	
	}
	for(i = 2; i >= 0; --i){
		for(k = 1; k <= 3; ++k){
			for(j = 0; j <= 6; ++j){
				if(j >= 3 - i && j <= 3 + i)
					cout<<"*";
				else
					cout<<' ';		
			}
		}
		cout<<endl;	
	}
	return 0;
	
}