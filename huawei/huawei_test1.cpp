/*�����ַ�������ascii������Ȼ���ظ����ַ�ֻ���һ��
  ˼·��1.���ַ������ÿ�������
        2.����ַ������ظ���ֻ���һ��
*/
#include<iostream>
#include<string>
using namespace std;

void quickSort(string& str, int begin, int end){
	if(begin >= end)
		return;
	int i = begin, j = end, base = i;
	while(i < j){
		while(str[j] >= str[base] && i < j)
			--j;
		while(str[i] <= str[base] && i < j)
			++i;
		if(i != j){
			char temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
	if(i != base){
		char temp = str[i];
		str[i] = str[base];
		str[base] = temp;
	}
	quickSort(str, begin, i - 1);
	quickSort(str, i + 1, end);	
}

void print(string str){
	if(str.size() == 0 || str.size() == 1)
		cout << str;
	char c = str[0];
	cout << c;
	for(int i = 1; i < str.size(); ++i){
		if(str[i] != c)
			cout << str[i];
		c = str[i];
	}
}
int main(){
	string str;
	cin >> str;
	quickSort(str, 0, str.size() - 1);
	cout << str << endl;
	print(str);
	return 0;
}