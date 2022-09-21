#include <fstream>
#include <iostream>

using namespace std;

int main() {
  //Load input file
  ifstream inFile;
  inFile.open("NumberData1.txt");

  int dataTemp, sumData = 0, counter = 0;
  
  //Load in data of input file with while loop
  while (!inFile.eof()) {
    inFile >> dataTemp;
    // cout << dataTemp << endl;

    //Check to see if data is valid
    if (dataTemp >= 0) {
      //Update the cumulative data
      sumData = sumData + dataTemp;
      counter++;
      
    } else { // value is negative so we should exit
      cout << "Negative value encountered of " << dataTemp << endl;
      cout << "Will not use rest of the data... " << endl;
      break;
    }
  }
  
  cout << "The sum of valid data is; " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  
  //Integer output
  cout << "The average of the valid data is: " << sumData / counter << endl;
  //Double output
  cout << "The average of the valid data is: "
       << (static_cast<double>(sumData) / counter) << endl; 
}