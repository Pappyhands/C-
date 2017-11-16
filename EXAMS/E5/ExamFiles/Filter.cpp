#include <iostream>
#include "Filter.h"

using namespace std;

// default ctor
Filter::Filter() :
	m_fileName(""), m_minGrade(""), m_minScore(0)
{

}

// copy ctor
Filter::Filter(const Filter & other) :
	m_fileName(other.m_fileName), m_minGrade(""), m_minScore(0)
{

}

Filter::Filter(string fileName) :
	m_fileName(fileName), m_minGrade(""), m_minScore(0)
{ }

// dtor...
Filter::~Filter()
{

}

// other methods...
//...
void Filter::minGrade(string minGrade)
{
	m_minGrade = minGrade;
}

void Filter::minScore(int minScore)
{
	m_minScore = minScore;
}

void Filter::filter()
{
	
}

ostream & operator<<(ostream & os, const Filter & x)
{
	os << "I am a Filter, here is my state:" << endl;
	os << "fileName="<< x.m_fileName << " minGrade=" << x.m_minGrade << " minScore=" << x.m_minScore <<endl;
	return os;
}
