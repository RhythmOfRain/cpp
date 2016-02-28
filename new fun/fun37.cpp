#include<iostream>
using namespace std;

void varStatic(){
	int var = 0;
	static int varSta = 0;
	++var;++varSta;
	cout<<"var = "<<var<<"  varStatic = "<<varSta<<endl;
	
}
int main(){
	int i;
	for(i = 0; i < 3; ++i)
		varStatic();
	return 0;
	
}