#include<iostream>
using namespace std;

int main(){
	int grade;
	cout<<"please input your grade\n";
	cin >> grade;
	char c;
	c = grade >= 90 ? 'A' : (grade >= 60 ? 'B' : 'C');
	cout<<"your grade belong to rank: "<<c<<endl;
	return 0;
}