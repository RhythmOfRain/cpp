#include<iostream>
using namespace std;
void insertSort(int p[], int numCnt){
	int i, j, k, temp;
	for(i = 1; i < numCnt; ++i){
		j = i;
		k = i - 1;
		while(p[i] < p[k] && k >= 0){
			--j;
			--k;
		}
		if(i != j){
			temp = p[i];
			for(k = i - 1; k >= j; --k)
				p[k+1] = p[k];
			p[j] = temp;	
		}
	}	
}

void chooseSort(int p[], int numCnt){
	int i, j, min, temp;
	for(i = 0; i < numCnt -1; ++i){
		min = i;
		for(j = i + 1;j < numCnt; j++){
			if(p[j] < p[min])
				min = j;
		}
		if(i != min){
			temp = p[i];
			p[i] = p[min];
			p[min] = temp;
		}
	}	
}

void bubbleSort(int p[], int numCnt){
	bool change;
	int i, j, temp;
    for(i = numCnt - 1; i >= 1; --i){
	    change = false;
		for(j = 0; j < i; ++j){
			if(p[j] > p[j+1]){
				change = true;
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
		if(!change)
			break;
	}		
}

int main(){
	int numCnt,i,j,k,min,temp;
	int num;
	void (*sortAlgorithm[3])(int p[], int numCnt) = {insertSort, chooseSort, bubbleSort};
	cout<<"0 indicate insertSort, 1 indicate chooseSort, 2 indicate bubbleSort, -1 to quit\n";
		cin >> num;
	do{	
		cout<<"please input num:\n";
		cin >> numCnt;
		int *p = new int[numCnt];
		for(i = 0; i < numCnt; ++i)
			cin >> p[i];
		sortAlgorithm[num](p, numCnt);
		for(i = 0; i < numCnt; ++i)
			cout << p[i] <<' ';
		cout << endl;		
		delete []p;
		cin >>num;
	}while(num != -1);
	return 0;
}