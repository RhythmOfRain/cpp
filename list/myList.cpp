#include<iostream>
#include"list.h"
using namespace std;

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    //int a[2] = {0,1};
    list listA(a, 10);
    listA.print();
    cout << endl;
    int pos, num;
    //cin >> pos >> num;
    //listA.insert(pos, num);
    //listA.print();
    //cout<<endl;
    //cout<<listA.getEleByKey(num)<<endl;
    //cout<<listA.getEleByPos(pos)<<endl;
    int orginal, newer;
    /*while(1){
        cin >> pos >> num;
        listA.changeByPos(pos, num);
        listA.print();
        cout << endl;
        cin >> orginal >> newer;
        listA.changeByNum(orginal, newer);
        listA.print();
        cout << endl;
    }*/
    listA.reverse();
    listA.print();

    return 0;
}
