#include<iostream>
using namespace std;

int main(){
	double up = 2,down = 1,sum = 0;
	int i = 1;
	while(i <= 20){
		sum += up / down;
		up = up + down;
		down = up - down;		
		++i;
	}
	cout<<sum<<endl;
	return 0;
}