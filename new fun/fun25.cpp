#include<iostream>
using namespace std;

int main(){
	unsigned i = 2;
	double sum = 1, product = 1;
	while(i <= 20){
		product *= i;
		sum += product;		
		++i;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;	
}