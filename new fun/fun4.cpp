#include<iostream>
using namespace std;

int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	int year, month, day, result;
	bool leapYear;//mean run nian
	cout<<"please input year,month,day\n";
	while(1){
		cin >> year >> month >> day;
		leapYear = false;
		result = 0;
		//check input's range
		if(year >= 0 && year <= 3000 && month > 0 && month < 13 && day <= days[month] && day > 0){
			//check year is leapYear or not
			if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				leapYear = true;
			if(month == 2 && day == 29 && !leapYear)
				cout<<"not a leap year\n";
			else{
				for(int i = 1; i < month; ++i)
					result += days[i];
				result += day;
				if(month > 2 && !leapYear)
					result -= 1;
				cout<<"result = "<<result<<endl;
			}
		}else
			cout<<"illegal input\n";
	}
    return 0;	
}