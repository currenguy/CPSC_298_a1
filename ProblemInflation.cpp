#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  //Initialize variables
  double oldCost = -1.0;
  double inflationRate = -1.0;
  double newCost = -1.0;
  int yearsAway = -1;

  //User input
  cout << "Enter item cost (dollars): " << endl;
  cin >> oldCost;

  cout << "Enter purchase time (years from now): " << endl;
  cin >> yearsAway;

  cout << "Enter the rate of inflation (percentage): " << endl;
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
  cout << endl;
  cout << "Cost before inflation: " << oldCost << endl;
  cout << "Cost after inflation: " << newCost << endl;

  return 0;
}
