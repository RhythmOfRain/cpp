#include<iostream>
using namespace std;

void heapAdjust(int a[], int i, int length){
	int left, right, change, temp;
	while(i <= length / 2 -1){
		left = 2 * i + 1, right = 2 * i + 2;
		if(right < length){
			if(a[i] >= a[left] && a[i] >= a[right])
				break;
			else
				change = a[left] > a[right] ? left : right;
			    temp = a[i];
				a[i] = a[change];
				a[change] = temp;
				i = change;
		
		}else{
			if(a[i] >= a[left])
				break;
			else{
				change = left;
				temp = a[i];
				a[i] = a[change];
				a[change] = temp;
				break;
			}		
		}
	}	
}

int main(){
	int numCnt,i,temp;
	cout<<"please input numCnt:\n";
	cin >> numCnt;
	int *p = new int[numCnt];
	for(i = 0; i < numCnt; ++i)
		cin >> p[i];
	for(i = numCnt / 2 - 1; i >= 0; --i)
		heapAdjust(p, i, numCnt);
	for(i = numCnt - 1; i >= 1; --i){
		temp = p[i];
		p[i] = p[0];
		p[0] = temp;
		heapAdjust(p, 0, i);
	}
	for(i = 0; i < numCnt; ++i)
		cout << p[i]<<' ';
	delete []p;
	return 0;
}