/*用栈完成表达式求值问题  先转换为后缀表达式然后求值*/
#include<iostream>
#include<string>
#include<stack>
#include<cctype>
#include<sstream>
using namespace std;

char priv[7][7] = {{'>','>','<','<','<','>','>'},
	    		   {'>','>','<','<','<','>','>'},
			       {'>','>','>','>','<','>','>'},
			       {'>','>','>','>','<','>','>'},
			       {'<','<','<','<','<','=',' '},
			       {'>','>','>','>',' ','>','>'},
			       {'<','<','<','<','<',' ','='}};
int cton(char c){
	int res = 0;
	switch(c){
		case '+':res = 0;break;
		case '-':res = 1;break;
		case '*':res = 2;break;
		case '/':res = 3;break;
		case '(':res = 4;break;
		case ')':res = 5;break;
		case '#':res = 6;break;
	}
	return res;
}
char operator_cmp(char a, char b){
	return priv[cton(a)][cton(b)];
}
double jisuan(double a, double b, char c){
	if(c == '+')
		return a + b;
	if(c == '-')
		return a - b;
	if(c == '*')
		return a * b;
	if(c == '/')
		return a / b;
	return 0;
}
double calc(string s){
    stack<double> num;
	for(const auto &e : s){
		if(isdigit(e))
			num.push(e - '0');
		else{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			double temp = jisuan(a, b, e);
			num.push(temp);
		}

	}
    return num.top();
}

string reform(string s){
    ostringstream os;
	stack<char> st;
	for(const auto &e : s){
		if(isdigit(e))
			os << e;
		else{
			if(st.empty() || operator_cmp(st.top(), e) == '<')
				st.push(e);
			else if(operator_cmp(st.top(), e) == '=')
				st.pop();
			else{
				while(!st.empty() && operator_cmp(st.top(), e) == '>'){
					os << st.top();
					st.pop();
				}
				if(!st.empty() && operator_cmp(st.top(), e) == '=')
					st.pop();
				else
					st.push(e);
			}
		}

	}
	while(!st.empty()){
		os << st.top();
		st.pop();
	}
    return os.str();
}

int main(){
    string s;
	cin >> s;
	cout << calc(reform(s)) << endl;
	return 0;
}
