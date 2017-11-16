#include <iostream>
#include "Filter.h"

using namespace std;
int main()
{
	try
    {
		Filter f("applicants.txt");
		cout << "working" << endl;
		f.minGrade("A");
		f.minScore(800);
		// f.filter();
		cout << f << endl;

		f.minGrade("B");
		f.minScore(820);
		// f.filter();
		// cout << f << endl;
    }
    catch (const char * msg)
    {
      cout << msg << endl;
    }

}
