#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int i, j, k;
	for(i = 0; i <= 1000000; ++i){
		j = sqrt(i + 100);
	    k = sqrt(i + 168);
		if(j * j == i + 100 && k * k == i + 168)
			cout<<i<<endl;
	}
    return 0;	
}