#include<iostream>
using namespace std;

int main(){
	int day = 9, peach = 1;
	while(day >= 1){
		peach = (peach + 1) * 2;
		--day;
	}
	cout<<"peach = "<<peach<<endl;
}