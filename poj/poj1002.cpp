#include<iostream>
#include<map>
#include<string>
#include<stdlib.h>
using namespace std;
char alphabet[26] = "2223334445556667777888999";
int main(){
	string str, resultStr = "00000000";
	int strlen, i, j, itemNum;
	map<string, int> msi;
	cin >> itemNum;
	while(cin >>str){
		strlen = str.length();
		j = 0;
		for(i = 0; i < strlen; ++i){
			if(str[i] == '-')
				continue;
			if(str[i] >= 'A' && str[i] <= 'Z'){
				resultStr[j++] = alphabet[str[i] - 'A'];
			}
			else if(str[i] >= '0' && str[i] <= '9')
				resultStr[j++] = str[i];
			if(j == 3)
				resultStr[j++] = '-';		
		}		
	msi[resultStr] += 1;	
	}
	if(msi.size() == itemNum)
	    cout<<"No duplicates.\n";
	else{
		map<string, int>::const_iterator it; 
        for (it = msi.begin(); it != msi.end(); ++it){
			if(it->second != 1)
				cout<<it->first<<' '<<it->second<<endl;	
	    }
	}
    return 0;
}