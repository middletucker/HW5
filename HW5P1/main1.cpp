
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

  // open output file
  outFile.open("AnalyzedData.txt");

  // read in the date - first line of file
  inFile >> date;
  cout << date << endl;

  // add date to the output file
  outFile << date << endl;

  // read in 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;

  while(inFile)
    {
      // update number of cases & persons tested
      cumulative_cases = cumulative_cases + TestResult;
      count++; // increment the number of persons

      //read in the next line
      inFile >> firstName;
      inFile >> TestResult;
    }

  // display data
  cout << "Total Number Cases = " << count << endl;
  cout << "Number of persons tested = " << cumulative_cases << endl;

  // read data into file
  outFile << "Total Number Cases = " << count << endl;
  outFile << "Number of persons tested = " << cumulative_cases << endl;
  outFile << fixed << showpoint << setprecision(2);
  outFile << "The prevalence is ";
  outFile << ((static_cast<double>(cumulative_cases)) / count) * 100;
  outFile << " %" << endl;
  
  // close external files
  inFile.close();
  outFile.close();


  return 0;
}