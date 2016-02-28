#include<iostream>
#include<string>
using namespace std;
string s = "abcdefg";

void output(string s,int i){
	if(i == s.length())
		return ;
	if(i < s.length())
		output(s,i + 1);
	cout<<s[i];
	return ;
	
	
}
int main(){
	output(s,0);
    return 0;	
}