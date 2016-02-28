#include<iostream>
using namespace std;

int main(){
	int base, num;
	while(1){
		cout<<"please input base and num\n";
		cin >> base >> num;
		int sum = base;
		int j = 2,temp = base;
		cout<<temp;
		while(j <= num){
			cout<<'+';
			temp = temp * 10 + base;
			cout<<temp;
			sum += temp;
			++j;			
		}
		cout<<"="<<sum<<endl;
	}
	
}