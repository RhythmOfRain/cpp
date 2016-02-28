#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i, j, k, count = 0;
	for(i = 101; i <= 200; ++i){
		k = sqrt(i);
		for(j = 2; j <= k; ++j){
			if(i % j == 0)
				break;
		}
		if(j > k){
			++count;
			cout<<i<<' ';
			//each line has 5 items
			if(count % 5 == 0)
				cout<<"\n";
			
		}
	}
	cout<<"\ncount: "<<count<<endl;
	return 0;
}