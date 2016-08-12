#include"TextQuery.h"
#include<sstream>
using namespace std;
TextQuery::TextQuery(ifstream& infile):each_line(new vector<string>){
    string line;
    while(getline(infile, line)){
	each_line -> push_back(line);
   	int n = each_line -> size() - 1;
	istringstream instr(line);
	string word;
	while(instr >> word){
	    auto &e = word_line[word];
	    if(!e)
	        e.reset(new set<line_no>);
	    e -> insert(n);			
	}
    }
}

QueryResult TextQuery::query(const string& s) const{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    if(word_line.find(s) == word_line.end())
	return QueryResult(s, nodata, each_line);
    else{
	auto loc = word_line.find(s);
	return QueryResult(s, loc -> second, each_line);
    }
}
//word line each_line
ostream& print(ostream& os, const QueryResult& qr){
    os << qr.word << " occurs " << qr.line -> size() << " " << "times" << endl;
    for(auto num : *qr.line){
	os << "\t(line " << num + 1 << ") "
	   << *(qr.each_line -> begin() + num) << endl;
    }
    return os;
}
