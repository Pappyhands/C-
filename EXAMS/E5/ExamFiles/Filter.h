#ifndef FILTER_H
#define FILTER_H

#include <iostream>
#include <string>

using namespace std;

class Filter
{
private:
	// class state ...
	string m_fileName;
	string m_minGrade;
	int m_minScore;
	

public:
	// behavior...

	Filter(); // default ctor
	Filter(const Filter & other); // copy ctor
	Filter(string fileName);

	virtual ~Filter(); // destructor

	// additional methods
	// ...
	void minGrade(string minGrade); 
	void minScore(int minScore);
	void filter();
	

	// operator overloads
	friend ostream & operator<<(ostream & os, const Filter & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const Filter & x);

#endif
