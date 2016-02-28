#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int apaNum = 0,digNum = 0,blkNum = 0,othNum = 0;
	getline(cin, s);
	int i = 0,len = s.length();
	while(i < len){
		if(s[i] >= '0' && s[i] <= '9')
			++digNum;
		else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			++apaNum;
		else if(s[i] == ' ')
			++blkNum;
		else
			++othNum;
		++i;
	}
	cout<<apaNum<<' '<<digNum<<' '<<blkNum<<' '<<othNum<<endl;
	return 0;
}