#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int itemCnt;
	double radium[40] = {0.0};
	int i = 0, j;
	while(i < 40){
		double temp = 100 * (i+1) / 3.14;
		radium[i] = sqrt(temp);
		++i;
	}
	double x,y;
	cin >> itemCnt;
	i = 0;
	while(i < itemCnt){
		cin >> x >> y;
		double r = sqrt(x * x + y * y);
		j = 0;
		while(r > radium[j])
			++j;
		cout<<"Property "<<i+1<<": This property will begin eroding in year "<< j+1 <<".\n";	
		++i;
	}
	cout<<"END OF OUTPUT.\n";
	return 0;	
}