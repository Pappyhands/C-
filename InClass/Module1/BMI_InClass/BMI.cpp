#include <iostream>
#include <iomanip>
#include "../../../utilities/UserInput.h"
#include "BMI.h"

using namespace std;

// lb and feet
int main()
{
    try
    {
        UserInput in;
        cout << fixed << setprecision(2);
        
        double weight = in.readDouble("Enter weight (Lb): ");
        double height = in.readDouble("Enter height (Ft): ");
        
        double bmi = calculateBMI(weight * 0.453592, height * 0.3048);
	
		cout << "Your BMI is: " << bmi << endl;
        
        return 0;
    }
    catch (const char * msg)
    {
        cout << msg << endl;
        return -1;
    }
}

double calculateBMI(double w, double h)
{

    return w / (h * h);
    
}