#include <iostream>
using namespace std;

/* This program reads console input for max capacity of a room, as well as
 * the number of people attending. It then decides if the legal capacity is
 * met. Then, it says the number of people that must leave or may attend.
*/

int main()
{
  //Initialize variables
  int maxCapacity = -1;
  int numPeople = -1;
  bool safe = false;

  //Get user input for capacity and attendees
  cout << endl << "Enter max room capacity: ";
  cin >> maxCapacity;

  cout << endl << "Enter number of people attending: ";
  cin >> numPeople;

  //True if capacity not exceeded
  safe = (numPeople <= maxCapacity) ? true : false;

  //Prints message based on capacity
  if (safe == true)
  {
    cout << endl << "LEGAL CAPACITY MET." << endl;
    cout << (maxCapacity - numPeople) << " more people may attend.\n\n";
  }
  else
  {
    cout << endl << "LEGAL CAPACITY EXCEEDED." << endl;
    cout << "Exclude " << (numPeople - maxCapacity) << " people.\n\n";
  }
  return 0;
}
