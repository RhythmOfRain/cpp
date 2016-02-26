#include<iostream>
using namespace std;

/*void quick(int a[],int begin,int end){
	if(begin >= end)
		return;
	int base = begin,first = begin,second = end;
	int temp;
	
	while(begin < end){
		while(a[end] >= a[base] && end > base)
			--end;
		if(end != base){
			temp = a[base];
			a[base] = a[end];
			a[end] = temp;
			base = end;
		}
		while(a[begin] <= a[base] && begin < base)
			++begin;
		if(begin != base){
			temp = a[base];
			a[base] = a[begin];
			a[begin] = temp;
			base = begin;
		}	
	}
	quick(a,first,base - 1);
	quick(a,base + 1,second);
}*/
void quick(int a[],int begin,int end){
	if(begin >= end)
		return;
	int base = begin, i = begin, j = end;
	int temp;
	while(i < j){
		while(a[j] >= a[base] && j > i)
			--j;
		while(a[i] <= a[base] && i < j)
			++i;
		if(i != j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}	
	}
	if(i != base){
	    temp = a[i];
		a[i] = a[base];
		a[base] = temp;
	}
	quick(a, begin, i - 1);
	quick(a, i + 1, end);
}

int main(){
	int a[10] = {6,1,2,7,9,3,4,5,10,8};
	int b[10] = {1,6,7,2,9,3,4,10,8,5};
	quick(b,0,9);
	for(const auto &c : b)
		cout<<c<<' ';
	cout<<endl;
	return 0;
}