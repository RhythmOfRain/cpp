#include<iostream>
using namespace std;

int main(){
	int num, i, sum, count = 0;
	for(num = 100; num < 1000; ++num){
		sum = 0;
		//first number(from right to left)
		i = num % 10;
		sum += i * i * i;
		i = num % 100 / 10;
		sum += i * i * i;
		i = num / 100;
		sum += i * i * i;
		if(sum == num){
			++count;
			cout<<num<<' ';
			if(count % 5 == 0)
				cout<<endl;			
		}		
	}
	cout<<"count = "<<count<<endl;
	return 0;	
}