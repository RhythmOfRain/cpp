#include<iostream>
#include"list.h"
using namespace std;

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    list listA(a, 10);
    listA.print();
    cout << endl;
    int pos, num;
    cin >> pos >> num;
    listA.insert(pos, num);
    listA.print();
    cout<<endl;
    while(1){
    cin >> pos;
    listA.remove(pos);
    listA.print();
    cout<<endl;
    }

    return 0;
}
