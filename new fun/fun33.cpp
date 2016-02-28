#include<iostream>
using namespace std;

void quickSort(int a[], int begin, int end){
	if(begin >= end)
		return ;
	int i, j, base, temp;
	i = base = begin;
	j = end;
	while(i < j){
		while(a[j] >= a[base] && j > i)
			--j;
		while(a[i] <= a[base] && j > i)
			++i;
		if(i != j){
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;			
		}
	}
	if(i != base){
		temp = a[i];
		a[i] = a[base];
		a[base] = temp;
		base = i;
	}
	quickSort(a, begin, base - 1);
	quickSort(a, base + 1, end);
}
int main(){
	int a[10],i;
	char c;
	do{
		cout<<"please input ten numbers\n";
		for(i = 0; i < 10; ++i)
			cin >> a[i];
	    quickSort(a,0,9);
		for(i = 0; i < 10; ++i)
			cout<<a[i]<<' ';
		cout<<endl;
		cout<<"continue or not?(y/n)\n";
		cin >> c;		
	}while(c != 'n');
	
	return 0;
}