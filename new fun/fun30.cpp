#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int i;
	cout<<"please input str\n";
	cin >> s;
	int len = s.length();
	if(len % 2 == 0){
		for(i = len / 2; i < len; ++i){
			if(s[i] != s[len - 1 - i])
				break;			
		}
		if(i == len)
			cout<<"yes\n";
		else
			cout<<"no\n";	
	}	
	else{
	    for(i = 0; i < len / 2; ++i){
            if(s[i] != s[len - 1 - i])
				break;
			}
        if(i == len / 2)
            cout<<"yes\n";
		else
			cout<<"no\n";
    }
	return 0;	
}