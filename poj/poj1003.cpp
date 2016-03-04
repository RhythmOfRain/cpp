#include<iostream>
using namespace std;

int main(){
	double array[300];
	int i = 0;
	double sum = 0;
	while(i <= 300){
		sum += 1.0 / (i+2);
		array[i++] = sum;   		
	}
	double hangover;
	while(cin >> hangover){
		i = 0;
		if(hangover == 0.0)
			continue;
		else{
		    while(array[i] < hangover){
			    ++i;
		    }
		cout<<i+1<<" card(s)\n";
		}
	}
	return 0;	
}