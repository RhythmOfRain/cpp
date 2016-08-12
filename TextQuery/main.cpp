#include"TextQuery.h"
#include"Query.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void runQueries(ifstream &infile){
    TextQuery tq(infile);
    //tq.printall();
    //Query q = Query("hair.") & Query("Alice");
    //Query q = ~Query("hair.");
    //Query q = Query("hair.") | Query("Alice");
    Query q = Query("hair.") & Query("Alice") | Query("hair,");
    print(cout, q.eval(tq));
    //QueryResult res = tq.query("hair");
    //print(cout, res);
    
}
int main(){
    ifstream infile("File");
    runQueries(infile);
    infile.close();
    return 0;
}
