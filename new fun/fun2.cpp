#include<iostream>
using namespace std;

int main(){
	cout<<"please input your profit(/W)\n";
	double profit, award;
	cin >> profit;
	if(profit <= 10)
		award = profit * 0.1;
	else if(profit <= 20)
		award = 10 * 0.1 + (profit - 10) * 0.75;
	else if(profit <= 40)
		award = 10 * 0.1 + 10 * 0.75 + (profit - 20) * 0.05;
	else if(profit <= 60)
		award = 10 * 0.1 + 10 * 0.75 + 20 * 0.05 + (profit - 40) * 0.03;
	else if(profit <= 100)
		award = 10 * 0.1 + 10 * 0.75 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.015;
	else
		award = 10 * 0.1 + 10 * 0.75 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100)*0.01;
	cout<<"award = "<<award<<endl;
	return 0;
}
		
	
	
