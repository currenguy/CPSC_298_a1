#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

/* This problem reads user input for an item's cost, the year of purchase,
 * and the rate of inflation. Then, the program calculates the item's cost
 * in that year, taking into account the rate of inflation.
 */


int main(int argc, char **argv)
{
  //Initialize variables
  double oldCost = -1.0;
  double inflationRate = -1.0;
  double newCost = -1.0;
  int yearsAway = -1;

  //User input
  cout << endl << "Enter item cost (dollars): ";
  cin >> oldCost;

  cout << "Enter purchase time (years from now): ";
  cin >> yearsAway;

  cout << "Enter the rate of inflation (percentage): ";
  cin >> inflationRate;

  //Convert percentage value to decimal value
  inflationRate /= 100.0;

  //Calculate future cost of item
  newCost = oldCost;
  for (int i = 0; i < yearsAway; ++i)
  {
    newCost += (newCost * inflationRate);
  }

  //Outputs result
  cout << setprecision(2) << fixed;
  cout << endl << "--------------------------" << endl << endl;
  cout << "Cost before inflation: $" << oldCost << endl;
  cout << "Cost after inflation: $" << newCost << endl << endl;

  return 0;
}
