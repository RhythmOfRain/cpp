/*
输入一个日期，时间，求得+1s后的日期，时间，需要考虑闰年
例如：2016/02/28 23:59:59 加1s后得到2016/02/29 00:00:00
思路：1.首先将年月日，时分秒从字符串中提取出来，放置到year[3],hour[3]数组中
      2.然后对数组中的元素从右往左加1，全部加完后，再考虑最终结果是不是3月1号，如果是，则考虑是不是闰年，如果是闰年，则改为2月29号，如果不是闰年，则
	    不变动
*/
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int stoint(string str){
	int sum = 0;
	for(int i = 0; i < str.size(); ++i)
		sum = sum * 10 + (str[i] - '0');
	return sum;
}
void getData(string &str, int a[3]){
	int i = 0, k = 0;
	for(int j = 0; j < str.size(); ++j){
		if(str[j] == '/' || str[j] == ':'){
			a[k++] = stoint(str.substr(i, j - i));
			i = j + 1;
		}
	}
	a[k] = stoint(str.substr(i));	
}
const int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

void addOneSec(int year[3], int hour[3]){
	int cf = 1, temp = 0;
	temp = hour[2] + cf;
    cf = temp / 60;
    hour[2] = temp % 60;
	if(cf == 0)
		return;
	temp = hour[1] + cf;
	cf = temp / 60;
    hour[1] = temp % 60;
	if(cf == 0)
		return;
    temp = hour[0] + cf;
	cf = temp / 24;
    hour[0] = temp % 24;
	if(cf == 0)
		return ;
	temp = year[2] + cf;
    cf = temp > month[year[1]] ? 1 : 0;
    year[2] = cf == 1 ? temp - month[year[1]] : temp;
	temp = year[1] + cf;
    cf = temp > 12 ? 1 : 0;
    year[1] = cf == 1 ? temp - 12 : temp;
	year[0] += cf;
	if((year[0] % 400 == 0 || (year[0] % 4 == 0 && year[0] % 100 != 0)) && year[1] == 3 && year[2] == 1){
		year[1] = 2;year[2] = 29;
	}
	return;
}
int main(){
	string time1, time2;
	cin >> time1 >> time2;
	int year[3] = {0}, hour[3] = {0};
    getData(time1, year);
    getData(time2, hour);
    addOneSec(year, hour);	
	printf("%d/%02d/%02d ", year[0], year[1], year[2]);
	printf("%02d:%02d:%02d\n",hour[0], hour[1], hour[2]);
	return 0;	
}