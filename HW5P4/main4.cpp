
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int number, modulo1, modulo2 = 100, values = 0;

  for (int i = 0; i < 10; i++)
    {
      cin >> number;
      modulo1 = number % 42;
      if (modulo1 != modulo2)
      {
        values ++;
      }
      modulo1 = modulo2;
    }

  cout << values << endl;
  
  return 0;
}