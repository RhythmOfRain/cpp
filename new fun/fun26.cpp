#include<iostream>
using namespace std;

int fact(int num){
	if(num == 1 || num == 0)
		return 1;
	else
		return num * fact(num - 1);
	
}

int main(){
	int num;
	while(1){
		cout<<"please input num\n";
		cin >> num;
		if(num < 0)
			cout<<"0 - "<<endl;
		else
		    cout<<num<<"!= "<<fact(num)<<endl;
	}
	return 0;	
}