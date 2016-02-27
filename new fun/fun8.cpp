#include<iostream>
using namespace std;

int main(){
	int i, j;
	for(i = 1; i < 10; ++i){
		for(j = 1; j <= i; ++j){
			if(j == 3 && (i == 3 || i == 4))
				cout<<' ';
			cout<<j<<"*"<<i<<"="<<j*i<<"  ";
		}
		cout<<endl;
	}
	return 0;
}