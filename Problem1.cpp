#include <iostream>
using namespace std;

/* This program reads console input for the weight of one package of cereal
 * (in ounces), outputting the weight in metric tons and the number of boxes
 * needed for one metric ton of cereal.
*/

int main()
{
  //Initialize variables
  const double OUNCES_PER_TON = 35273.92; //Number of ounces in 1 Ton
  double weightOunces = -1.0;
  double weightTons = -1.0;
  double numBoxes = -1.0;

  //Get user input for cereal box weight in ounces
  cout << endl << "Provide the weight of one cereal box (ounces): ";
  cin >> weightOunces;

  //Calculations
  weightTons = weightOunces / OUNCES_PER_TON; //Converts weight to tons
  numBoxes = OUNCES_PER_TON / weightOunces; //Finds boxes needed per ton

  //Output
  cout << endl << "--------------------------" << endl << endl;
  cout << "Weight in Tons: " << weightTons << endl;
  cout << "Boxes needed for 1 Ton: " << numBoxes << endl;
  cout << endl;

  return 0;
}
