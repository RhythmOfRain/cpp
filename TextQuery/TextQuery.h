#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
#include"QueryResult.h"

class QueryResult;
class TextQuery{
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
    void printall(){
	for(auto e : *each_line)
		std::cout << e << std::endl;
	for(auto &e : word_line){
	    std::cout << e.first << std::endl;
	    for(auto &l : *(e.second))
		std::cout << l << ' ';
	    std::cout << std::endl;
	}
    }
private:
    std::shared_ptr<std::vector<std::string>> each_line;
    std::map<std::string,std::shared_ptr<std::set<line_no>>> word_line;
};
#endif
