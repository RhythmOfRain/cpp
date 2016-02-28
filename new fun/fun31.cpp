#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	cout<<"transfrom word to number,please input day:\n";
	string day;
	cin >> day;
	int result;
	/*
	if(day[0] == 'm' || day[0] == 'M')
		result = 1;
	else if(day[0] == 't' || day[0] == 'T'){
		if(day[1] == 'u' || day[1] == 'U')
			result = 2;
		else if(day[1] == 'h' || day[1] == 'H')
			result = 4;		
	}
	else if(day[0] == 'w' || day[0] == 'W')
		result = 3;
	else if(day[0] == 'f' || day[0] == 'F')
		result = 5;
	else if(day[0] == 's' || day[0] == 'S'){
		if(day[1] == 'a' || day[1] == 'A')
			result = 6;
		else if(day[1] == 'u' || day[1] == 'U')
			result = 7;
	}
    else
		result = -1;
	if(result == -1)
		cout<<"illegal input\n";
	else
		cout<<day<<" is the "<<result<<"st day\n";
	*/
	switch(day[0]){
		case 'm': case 'M':result = 1;break;
		case 'w': case 'W':result = 3;break;
		case 'f': case 'F':result = 5;break;
		case 't': case 'T':
		        switch(day[1]){
		          case 'u': case 'U':result = 2;break;
				  case 'h': case 'H':result = 4;break;
				  default:result = -1;break;
				}
				break;
		case 's': case 'S':
				switch(day[1]){
				  case 'a': case 'A':result = 6;break;
				  case 'u': case 'U':result = 7;break;
				  default:result = -1;break;
				}
				break;
	    default:result = -1;break;
	}
	if(result == -1)
		cout<<"illegal input\n";
	else
		cout<<day<<" is the "<<result<<"st day\n";
	return 0;
}