#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  double costNow = -1.0;
  double inflationRate = -1.0;
  int yearsAway = -1;

  cout << "Enter item cost (dollars): " << endl;
  cin >> costNow;

  cout << "Enter purchase time (years from now): " << endl;
  cin >> yearsAway;

  cout << "Enter the rate of inflation (percentage): " << endl;
  cin >> inflationRate;

  inflationRate /= 100.0;

}
