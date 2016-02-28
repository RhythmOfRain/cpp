#include<iostream>
using namespace std;

int main(){
	int n, i, j, temp;
	cout<<"please input count of number\n";
	cin >> n;
	int *p = new int[n];
	for(i = 0; i < n; ++i)
		cin >> p[i];
	//first method
	for(i = n - 1; i >= 0; --i)
		cout << p[i] << ' ';
	cout<<endl;
	
	//second method
	i = 0, j = n - 1;
	while(i < j){
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
		++i;
		--j;
	}
	for(i = 0; i < n; ++i)
		cout << p[i] << ' ';
	cout<<endl;
	
	delete []p;
	return 0;
}