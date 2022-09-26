
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double cost, numlawn, length, width, area;

  cin >> cost >> numlawn;

  for (int i = 0; i < numlawn; i++) {
    cin >> length >> width;
    area = area + (length * width);
  }

  cout << setprecision(10) << fixed << area * cost << endl;

  return 0;
}