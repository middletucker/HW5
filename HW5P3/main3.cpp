
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double WCI, Ta, Ws, K1 = 13.12, K2 = 11.37, K3 = 0.3965;

  cout << "Measured Temperature [C] | Wind Speed [km/hr] | Wind Chill Index "
          "[C]\n";

  for (Ta = 2; Ta <= 10; Ta = Ta + 4) {

    for (Ws = 5; Ws <= 11; Ws = Ws + 2) {
      WCI = K1 + 0.6125 * Ta - K2 * pow(Ws, 0.16) + K3 * Ta * pow(Ws, 0.16);
      cout << Ta << setw(30) << Ws << setw(28) << WCI << endl;
    }
  }

  return 0;
}
