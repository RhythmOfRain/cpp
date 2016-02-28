#include<iostream>
using namespace std;

int main(){
	//like Fibonacci sequence
	int first = 1, second = 1, month = 1;
	while(month <= 24){
		if(month == 1 || month == 2)
			cout<<month<<": "<<1<<endl;
		else{
			second = first + second;
			first = second - first;
			cout<<month<<": "<<second<<endl;
		}		
		++month;
	}
	return 0;
}