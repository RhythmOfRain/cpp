#include<iostream>
using namespace std;

void bubble(int**p,int len){
	int i,j = len - 1,temp;
	bool change;
	while(j > 0){
		change = false;
	    for(i = 0; i < j; i++){
		    if(p[i][1] > p[i+1][1]){
				change = true;
				temp = p[i][0];
				p[i][0] = p[i+1][0];
				p[i+1][0]=temp;
				temp = p[i][1];
				p[i][1] = p[i+1][1];
				p[i+1][1]=temp;		
			}
	    }
		if(!change)
			break;
		--j;
    }
}
void quick(int **p,int begin,int end){
	if(begin >= end)
		return;
	int i,j,base,temp;
	i = base = begin;
	j = end;
	while(i < j){
		while(p[j][1] >= p[base][1] && i < j)
			--j;
		while(p[i][1] <= p[base][1] && i < j)
			++i;
		if(i != j){
			temp = p[i][0];
			p[i][0] = p[j][0];
			p[j][0] = temp;
			temp = p[i][1];
			p[i][1] = p[j][1];
			p[j][1] = temp;			
		}	
	}
	if(i != base){
		temp = p[i][0];
		p[i][0] = p[base][0];
		p[base][0] = temp;
		temp = p[i][1];
		p[i][1] = p[base][1];
		p[base][1] = temp;
		base = i;
	}
	quick(p,begin,base-1);
	quick(p,base+1,end);	
}
int main(){
	char str[100][51];//must set to 51
	int strLen, strCnt, count = 0,i,j,reverseCnt;
	cin >> strLen >> strCnt;
	while(count < strCnt)
		cin >> str[count++];
	count = 0;
	int **p = new int*[strCnt];
	for(i = 0;i < strCnt; ++i)
		p[i] = new int[2];
	while(count < strCnt){
		i = reverseCnt = 0;
		while(str[count][i] != '\0'){
			j = i + 1;
			while(str[count][j] != '\0'){
				if(str[count][j++] < str[count][i])
					++reverseCnt;
			}
			++i;
		}
		p[count][0] = count;
		p[count][1] = reverseCnt;
		++count;
	}
	//bubble(p,strCnt);
	quick(p,0,strCnt-1);
	/*output result array*/
	/*for(i = 0; i < strCnt; ++i){
		for(j = 0; j < 2; ++j)
			cout<<p[i][j]<<' ';
		cout<<endl;
    }*/
	for(i = 0; i < strCnt; ++i){
		cout<<str[p[i][0]]<<endl;
    }
	for(i = 0; i < strCnt; ++i)
		delete []p[i];
	delete []p;
	return 0;	
}