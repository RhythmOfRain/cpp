#include<iostream>
using namespace std;

int main(){
	int a[] = {3,4,4,4,5,5,5,3,3,2,2,2,6}, len = 13, i;
	int high = 0, low = 0;
	for(i = 0;i < len; ++i){
		low = ~high & (low ^ a[i]);
		high = ~low & (high ^ a[i]);	
	}
	cout<<low<<endl;
	return 0;
}