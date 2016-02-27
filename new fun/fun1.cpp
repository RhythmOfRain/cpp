#include<iostream>
using namespace std;

int main(){
	int i, j, k, count = 0;
	for(i = 1; i <= 4; ++i){
		for(j = 1; j <= 4; ++j){
			for(k = 1; k <= 4; ++k){
				if(i != j && i != k && j != k){
					++count;
					cout<<i<<j<<k<<endl;
				}
			}
		}
	}
	cout<<"total: "<<count<<endl;
	return 0;
}