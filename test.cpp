#include <iostream>
using namespace std;

int main() {
  bool isContinue = true;
  int input;

  while(isContinue) {
    int i, j;

    cout << "Enter an operand: ";
    cin >> i;

    cout << "Enter a factor: ";
    cin >> j;

    cout << i << " * " << j << " is " << i*j;

    cout << "\nDo you want to continue? (1/0)";
    cin >> input;

    if(input == 1) {
      isContinue = true;
    } else {
      isContinue = false;
    }
  }

  return 0;
}
