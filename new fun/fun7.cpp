#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char c;
	//this code is very important,it means useing expand ascii table
	//下面这句话很重要，将会使用到拓展ascii码，原来的ascii码有128个，拓展后有256个
	system("chcp 437");
	for(int i = 0; i < 256; ++i){
		c = i;
	    cout<<c<<' ';
	}
	cout<<endl;
	return 0;
}