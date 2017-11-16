// CURRENT BUG(S):
// - N / A
// Last Revised: 9/21/17 by Austin Thompson

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

#include "utilities/FileReader.h"
#include "utilities/helper.h"

#include "main.h"

using namespace std;

// main function, runs full program
int main()
{
    Rectangle r1;
    
    r1.height = 1;
    r1.width = 1;
    
    Rectangle r2;
    
    r2.height = 2;
    r2.width = 2;
    
    Rectangle r3;
    
    r3.height = 3;
    r3.width = 3;
    
    //put the rectanges to an array 
    //write a selection sort that goes to that rectange
    
    vector<Rectangle> v;
    
    v.push_back(r2);
    v.push_back(r1);
    v.push_back(r3);
    
    for(auto it= v.begin(); it != v.end(); it++)
    {
        int temp = (*it).height;
        
        for(auto p= v.begin(); p != v.end(); p++)
        {
            cout << (*p).height << endl;
        }
        cout << endl;
        
    }
    
    cout << "it works!" << endl;
}
