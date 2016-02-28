#include<iostream>
using namespace std;
#define MAX

int main(){
	#ifdef MAX
	    cout<<"MAX\n";
	#else
		cout<<"NO MAX\n";
	#endif
	#undef MAX
	#ifndef MAX
	    cout<<"NO MAX\n";
	#endif
	return 0;
	
	
}