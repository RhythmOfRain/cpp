#include<iostream>
using namespace std;

int main(){
	int m, n, temp, multiply;
	cin >> m >> n;
	multiply = m * n;
	if(n > m){
	    temp = m;
		m = n;
		n = temp;
	}
	while(m % n != 0){
		temp = m % n;
		m = n;
		n = temp;		
	}
		
	cout<<"最大公约数= "<<n<<'\n';
	cout<<"最小公倍数= "<<multiply / n<<'\n';
	return 0;
	
	
}