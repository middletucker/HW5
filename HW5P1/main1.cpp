
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // declare variables
  string firstName, date;
  int TestResult, count = 0, cumulative_cases = 0;

  // declare stream variables
  ifstream inFile;
  ofstream outFile;

  // open the input file
  inFile.open("TestResultsData.dat");

  // read in the date - first line of file
  inFile >> date;
  cout << date << endl;

  // read in 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  return 0;
}