#include<iostream>
using namespace std;

int main(){
	//当计算出第n次弹起的高度时，即可知道第n+1次落地时球走过的距离
	double initialHeight = 100, bounceHeight, distance;
	int i = 1;
	bounceHeight = distance = initialHeight;
	while(i <= 9){
		//第n+1次落地后球走过的距离
		distance = distance + bounceHeight;
		//第n次反弹的高度,n = i
		bounceHeight = bounceHeight / 2;
		++i;
	}
	cout<<"10th bounceHeight = "<<bounceHeight / 2<<endl;
    cout<<"10th fall distance= "<<distance<<endl;	
}