#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include<iostream>
#include<string>
#include<set>
#include<memory>
#include<vector>

class QueryResult{
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    typedef std::vector<std::string>::size_type line_no;
    typedef std::set<line_no>::const_iterator line_it;
    QueryResult(std::string s, 
		std::shared_ptr<std::set<line_no>> p, 		
		std::shared_ptr<std::vector<std::string>> q):
	word(s),line(p), each_line(q){}
    std::set<line_no>::size_type size() const {return line -> size();}
    line_it begin() const {return line -> cbegin();}
    line_it end() const   {return line -> cend();}
    std::shared_ptr<std::vector<std::string>> get_file(){return each_line;}
private:
    std::string word;
    std::shared_ptr<std::set<line_no>> line;
    std::shared_ptr<std::vector<std::string>> each_line;
};

std::ostream& print(std::ostream&, const QueryResult&);
#endif
