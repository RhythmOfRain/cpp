#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	system("chcp 437");
	char w = 176, b = 219;
	int i, j;
	for(i = 1; i <= 8; ++i){
        for(j = 1; j <= 8; ++j){
			if((i + j) % 2 != 0)
				cout<<w;
			else
				cout<<b;
		}
		cout<<endl;	
	}
	return 0;
}