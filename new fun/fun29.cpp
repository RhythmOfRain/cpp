#include<iostream>
using namespace std;

int main(){
	int num;
	while(1){
	cin >> num;
	int count = 0;
	while(num != 0){
		++count;
		cout<<num % 10;
		num /= 10;		
	}
	cout<<"\ncount = "<<count<<endl;
	}
}