#include<iostream>
using namespace std;

void merge(int numArray[], int tempArray[], int begin, int mid, int end){
	int i = begin, j = mid + 1, k = begin;
	while(i != mid + 1 && j != end + 1){
		if(numArray[i] <= numArray[j])
			tempArray[k++] = numArray[i++];
		else
			tempArray[k++] = numArray[j++];
	}
	while(i != mid + 1)
		tempArray[k++] = numArray[i++];
	while(j != end + 1)
		tempArray[k++] = numArray[j++];
	for(i = begin; i != end + 1; ++i)
		numArray[i] = tempArray[i];	
}

void mergeSort(int numArray[], int tempArray[], int begin, int end){
	int mid;
	if(begin < end){
		mid = (begin + end) / 2;
		mergeSort(numArray, tempArray, begin, mid);
		mergeSort(numArray, tempArray, mid + 1, end);
		merge(numArray, tempArray, begin, mid, end);
	}
}

int main(){
	cout << "please input num:\n";
	int numCnt;
	cin >> numCnt;
	int *numArray = new int[numCnt];
	int *tempArray = new int[numCnt];
	cout<< "please input each data:\n";
	for(int i = 0;i < numCnt; ++i)
		cin >> numArray[i];
	mergeSort(numArray,tempArray,0,numCnt-1);
	for(int i = 0;i < numCnt; ++i)
		cout<<numArray[i]<<' ';
	cout<<endl;
	delete []numArray;
	delete []tempArray;
	return 0;	
}