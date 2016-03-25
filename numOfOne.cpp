#include<iostream>
using namespace std;

int numberOfOne(int num){
	int count = 0;
	unsigned int label = 1;
	while(label){
		if(label & num)
			++count;
		label = label << 1;
	}
	return count;
	
}
int main(){
	int num;
	cin >> num;
	cout<<"number of one in number is: "<<numberOfOne(num)<<endl;
	return 0;
}