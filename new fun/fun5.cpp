#include<iostream>
using namespace std;

int main(){
	cout<<"please input a,b,c\n";
	int a, b, c;
	cin >> a >> b >> c;
	if(a <= b && a <= c){
		cout << a << ' ';
		if(b <= c)
			cout<<b<<' '<<c<<endl;
		else
			cout<<c<<' '<<b<<endl;
	}
	else if(b <= a && b <= c){
		cout << b << ' ';
		if(a <= c)
			cout<<a<<' '<<c<<endl;
		else
			cout<<c<<' '<<a<<endl;
	}
	else{
		cout<<c<<' ';
		if(a <= b)
			cout<<a<<' '<<b<<endl;
		else
			cout<<b<<' '<<a<<endl;	
	}
	return 0;	
}