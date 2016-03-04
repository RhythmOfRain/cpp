#include<iostream>
using namespace std;

int main(){
	double monthly,sum = 0.0;
	while(cin >> monthly)
		sum += monthly;
	cout<<"$"<<sum/12<<endl;
	return 0;
}