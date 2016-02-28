#include<iostream>
using namespace std;

int main(){
	int a[3][3];
	int i, j, sum = 0;
	for(i = 0; i < 3; ++i)
		for(j = 0; j < 3; ++j){
			cin >> a[i][j];
			if(i == j)
				sum += a[i][j];
		}
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j)
			cout << a[i][j]<<' ';
		cout<<'\n';
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}