#include<iostream>
#include<cmath>
using namespace std;

//if number is a prime,then return true,other wise,return false
bool isPrime(int num){
	int i,k;
	k = sqrt(num);
	if(num == 0 || num == 1)
		return false;
	for(i = 2; i <= k; ++i){
		if(num % i == 0)
			return false;
	}
	return true;
}
int main(){
	int num,i,j,temp;
	cin >> num;
	//start disassemble if number isn't a prime
	if(!isPrime(num)){
		temp = num;
		while(!isPrime(num)){
			j = sqrt(num);
			for(i = 2; i <= j; ++i){
				if(num % i == 0){
					cout<<i<<'*';
					break;
				}				
			}
			num = num / i;
	    }
		cout<<num<<"="<<temp<<endl;
	}	
	else
		cout<<"cant disassemble\n";
	return 0;
}