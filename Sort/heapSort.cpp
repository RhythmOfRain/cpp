#include<iostream>
using namespace std;

void buildHeap(int a[], int num){
    int leafNode = num / 2 - 1, i, j, k, temp;
    for(i = leafNode; i >=0 ; --i){
        if(2*i+2 > num-1){
           if(a[i] >= a[2*i+1])
               continue;
            else
               j = 2*i+1;
        }
	else{
            if(a[i] >= a[2*i+1] && a[i] >= a[2*i+2])
	        continue;
	    else
	       j = a[2*i+1] > a[2*i+2] ? 2*i+1:2*i+2;
        }
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	while(j <= leafNode){
            if(2*j+2 > num-1){
               if(a[j] >= a[2*j+1])
                   break;
               else
                   k = 2*j+1;
             }
	     else{
                if(a[j] >= a[2*j+1] && a[j] >= a[2*j+2])
	             break;
	        else
	           k = a[2*j+1] > a[2*j+2] ? 2*j+1:2*j+2;
             }
             temp = a[j];
	     a[j] = a[k];
	     a[k] = temp;
	     j = k;				
	 }
    }		
}
void sortHeap(int a[], int num){
    int i, j, k, temp,leafNode;
    buildHeap(a, num);
    for(i = num - 1; i > 0; --i){
        temp = a[i];
	a[i] = a[0];
        a[0] = temp;
	if(i == 1)
	    break;
        leafNode = i / 2 - 1;
	j = 0;
	while(j <= leafNode){
            if(2*j+2>i-1){
                if(a[j] >= a[2*j+1])
                    break;
                else
                    k = 2*j+1;
                }     
	    else{
                if(a[j] >= a[2*j+1] && a[j] >= a[2*j+2])
	   	    break;
		else
		    k = a[2*j+1] > a[2*j+2] ? 2*j+1 : 2*j+2;
		}
	    temp = a[j];
	    a[j] = a[k];
	    a[k] = temp;
	    j = k;     
        }	
    }	
}	


int main(){
	int num, i;
	cout<<"please input num:\n";
	cin >> num;
	int *p = new int[num];
	for(i = 0; i < num; ++i)
	    cin >> p[i];
	sortHeap(p,num);
	for(i = 0; i < num; ++i)
	    cout << p[i]<< ' ';
        cout<<endl;
	delete []p;
}
