/*用队列做火车重排问题*/
#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	queue<int> q[3];
	string s;
	cin >> s;
	int cur = 1;
	for(const auto &e : s){
		int num = e - '0';
		if(num == cur){
			int j;
			for(j = 0; j < 3; ++j){
				if(q[j].empty())
					break;
			}
			if(j < 3){
			    ++cur;
			    continue;
			}
			else{
				cout << "wujie\n";
				return 0;
			}
		}else{
		    for(int i = 0; i < 3; ++i){
				if(!q[i].empty() && q[i].front() == cur){
					q[i].pop();
					++cur;
					break;
				}
			}
			int max = 0x3f3f3f, index = -1;
			for(int i = 0; i < 3; ++i){
				if(!q[i].empty() && num > q[i].back() && num -q[i].back() < max){
					max = num - q[i].back();
					index = i;
				}
			}
			int i = 2;
			if(index == -1){
				for(i = 2; i >=0; --i){
					if(q[i].empty()){
						q[i].push(num);
						break;
					}
				}
			}else{
				q[index].push(num);
			}
			if(i == -1){
				cout << "wujie\n";
				return 0;
			}
		}
	}
	cout << "ok\n";
	return 0;
		
}
