#include<iostream>
using namespace std;

int main(){
	int numCnt, i, k, m, z, d, temp;
	cout<<"please input numCount:\n";
	cin >> numCnt;
	int *p = new int[numCnt];
	for(i = 0; i < numCnt; ++i)
		cin >> p[i];
	d = numCnt / 2;
	while(d > 0){
		for(i = 0; i < d ; ++i){
			k = i + d;
			while(k < numCnt){
				m = k;
				while(m >= d && p[k] < p[m - d])
					m -= d;
				if(m != k){
					temp = p[k];
					z = k - d;
					while(z >= m){
						p[z + d] = p[z];
						z -= d;
					}
					p[m] = temp;
				}
				k += d;				
			}
		}
		d /= 2;
	}
	for(i = 0; i < numCnt; ++i)
		cout<<p[i]<<' ';
	cout<<endl;
	return 0;
}