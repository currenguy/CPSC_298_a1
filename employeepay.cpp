#include <iostream>
using namespace std;

/*
 * This program reads console input for number of hours worked in one week.
 * It calculates the gross pay and net pay based on overtime and deductions.
 */

int main(int argc, char **argv)
{
  //Initialize variables
  const int NORMAL_HOURS = 40;
  const double HOURLY_PAY = 16.0;
  const double OVERTIME_PAY = HOURLY_PAY * 1.5;
  const double INSURANCE_DEDUCTION = 10.0;
  int hoursInput = -1;
  double grossPay = -1.0;
  double netPay = -1.0;
  double socialSecurityTax = -1.0;
  double federalIncomeTax = -1.0;
  double stateIncomeTax = -1.0;

  //Get user input for hours worked per week
  cout << endl << "Enter hours worked per week: ";
  cin >> hoursInput;

  //Calculates gross pay
  if (hoursInput > NORMAL_HOURS)
  {
    grossPay = NORMAL_HOURS * HOURLY_PAY;
    grossPay += (hoursInput - NORMAL_HOURS) * OVERTIME_PAY;
  }
  else
  {
    grossPay = hoursInput * HOURLY_PAY;
  }

  //Calculates deductions
  socialSecurityTax = grossPay * 0.06;
  federalIncomeTax = grossPay * 0.14;
  stateIncomeTax = grossPay * 0.05;

  //Calculates net pay
  netPay = grossPay;
  netPay -= socialSecurityTax;
  netPay -= federalIncomeTax;
  netPay -= stateIncomeTax;
  netPay -= INSURANCE_DEDUCTION;

  //Outputs pay statement
  cout << endl << "--------------------------" << endl << endl;
  cout << "GROSS PAY BEFORE DEDUCTIONS: $" << grossPay << endl << endl;
  cout << "SOCIAL SECURITY DEDUCTION: -$" << socialSecurityTax << endl;
  cout << "FEDERAL INCOME TAX DEDUCTION: -$" << federalIncomeTax << endl;
  cout << "STATE INCOME TAX DEDUCTION: -$" << stateIncomeTax << endl;
  cout << "MEDICAL INSURANCE DEDUCTION: -$" << INSURANCE_DEDUCTION << endl;
  cout << "-----------------" << endl;
  cout << "NET PAY TAKE HOME PAY = $" << netPay << endl << endl;

  return 0;
}
