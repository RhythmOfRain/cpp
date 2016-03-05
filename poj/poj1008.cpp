#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

string haabMonthArray[19] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
string tzolkindayArray[20] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"}; 

int main(){
	int itemCnt,count = 0;
	cin >> itemCnt;
	char day[3];
	string month;
	int haabDay,haabMonth, haabYear,sum;
	int tzolkinDay,tzolkinMonth, tzolkinYear;
    cout<<itemCnt<<endl;
	while(count < itemCnt){	
		cin >> day >> month >> haabYear;
		day[strlen(day)-1] = '\0';
    	haabDay = atoi(day);
        for(haabMonth = 0; haabMonth < 19; ++haabMonth){
			if(haabMonthArray[haabMonth] == month)
				break;				
		}
		sum = haabYear * 365 + haabMonth * 20 + haabDay;
        tzolkinYear = sum / 260;
		sum %= 260;
		tzolkinMonth = sum % 20;
		tzolkinDay = sum % 13 + 1;
        cout<<tzolkinDay<<' '<<tzolkindayArray[tzolkinMonth]<<' '<<tzolkinYear<<endl;		
		++count;
        cout<<count<<endl;		
	}
	return 0;	
}