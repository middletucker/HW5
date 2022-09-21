#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inFile;
  inFile.open("NumberData1.txt");

  int dataTemp, sumData = 0, counter = 0;

  while (!inFile.eof()) {
    inFile >> dataTemp;
    // cout << dataTemp << endl;
    if (dataTemp >= 0) {
      sumData = sumData + dataTemp;
      counter++;
    } else {
      cout << "Negative value encountered of " << dataTemp << endl;
      cout << "Will not use rest of the data... " << endl;
      break;
    }
  }
  cout << "The sum of valid data is; " << sumData << endl;
  cout << "The number of valid data points is: " << counter << endl;
  cout << "The average of the valid data is: " << sumData / counter << endl;
  cout << "The average of the valid data is: "
       << (static_cast<double>(sumData) / counter) << endl;
}