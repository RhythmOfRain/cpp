#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *a, int from, int to){
	while(from < to)
		swap(a[from++], a[to--]);
}
void circle(char *a, int from, int mod){
	for(int i = 2 * from % mod; i != from; i = 2 * i % mod)
		swap(a[from - 1], a[i - 1]);
}
void shift(char *a, int n, int m){
    reverse(a, m, n - 1);
	reverse(a, n, m + n - 1);
	reverse(a, m, m + n - 1);
}
void perfect(char *a, int n){
	while(n > 1){
		int n2 = n * 2;
		int k = 0, m = 3;
		while(m - 1 <= n2){
			++k;
			m *= 3;
		}
		m = (m / 3 - 1) / 2;
		shift(a, n, m);
		for(int t = 0, i = 1; t < k; ++t, i *= 3)
			circle(a, i, 2 * m + 1);
	    n -= m;
		a += 2 * m;
	}
	if(n == 1)
		swap(a[0], a[1]);
}


int main(){
	char s[1000];
	cin >> s;
	//shift(s, 5, 3);
	int len = strlen(s);
	if(!len || len % 2 != 0 )
		return 0;
	perfect(s, len / 2);
	cout << s << endl;

}
