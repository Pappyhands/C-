#include <iostream>
#include <iomanip>
#include "../../../utilities/FileReader.h"
#include "../MathManager/MathManager.h"

#include "main.h"

using namespace std;

int main()
{
  try
  {
    cout << fixed << setprecision(2);
    reportSales("sales1.txt");
    reportSales("sales2.txt");
  }
  catch (const char * msg)
  {
    cout << msg << endl;
  }
}

void reportSales(const char * file)
{
  int days(0);
  double sales[7];
  double total(0);

  FileReader f(file);
  while (f.next())
  {
      sales[days++] = f.readDouble();
  }

  cout << endl << "Sales report for " << file << endl;
  for (int d(0); d < days; d++)
  {
    cout << "Day " << (d+1) << " sales: $" << sales[d] << endl;
  }

  cout << "Weekly total sales: $" << sum(sales, days) << endl;
  cout << "Daily average sales: $" << average(sales, days) << endl;
  cout << "Best day: $" << max(sales, days) << endl;
  cout << "Worst day: $" << min(sales, days) << endl;
}
