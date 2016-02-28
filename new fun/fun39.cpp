#include<iostream>
using namespace std;
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
/* 宏定义中允许包含两个花括号的情形，此时必须在最右边加上"\"  */
#define exchange(a,b){\
                        int t;\
                        t=a;\
                        a=b;\
                        b=t;\
                      }
#define LAG >
#define SMA <
#define EQ ==

int main(){
	cout<<TRUE<<' '<<FALSE<<' '<<SQ(3)<<endl;
	int a = 0, b = 1;
	exchange(a, b);
	cout<<a<<' '<<b<<endl;
	if(a LAG b)
		cout<<"a > b\n";
}