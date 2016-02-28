#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	system("chcp 437");
	char smile = 2, black = 176;
	cout<<smile<<smile<<endl;
	int i,j;
	for(i = 1; i <= 6; ++i){
		for(j = 1; j <= i; ++j)
			cout<<black<<black;
		cout<<endl;
	}
	return 0;	
}