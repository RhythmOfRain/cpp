#include<iostream>
using namespace std;

int main(){
	char m, n, l;
	for(m = 'x'; m <= 'z'; ++m)
		for(n = 'x'; n <= 'z'; ++n){
			if(m != n){
				for(l = 'x'; l <= 'z'; ++l){
					if(m != l && n != l && m != 'x' && l != 'x' && l != 'z')
						cout<<"a-"<<m<<' '<<"b-"<<n<<' '<<"c-"<<l<<endl;
				}
			}
		}
    return 0;
}