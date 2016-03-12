#include<iostream>
using namespace std;
int search(int a[], int size, int n){
    int begin = 0, end = size - 1, mid;
    while(begin <= end){
        mid = (begin + end) / 2;
		if(a[mid] == n)
			return mid + 1;
		else if(a[mid] < n)
			begin = mid + 1;
		else
			end = mid - 1;
    }
    return -1;
}
int main(){
	int numCnt;
	cout << "please input amount(ascending order):\n";
	cin >> numCnt;
	int *a = new int[numCnt];
	int i = 0;
	while(i < numCnt)
		cin >> a[i++];
	char c = 'y';
    while(c != 'n'){
    	int n;
		cout<<"please input the searched number:\n";
    	cin >> n;
		cout << search(a, numCnt, n) << endl;
		cout<<"continue?(y/n)\n";
		cin >> c;
    }
	delete []a;
    return 0;
}