#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void guessMyNumber() {
  srand(time(NULL));
  int randomNumber = rand()%10+1;
  int enteredNumber;
  bool tryAgain = true;
  string isTryAgain;

  while(tryAgain) {
    cout << randomNumber << " Enter a guess number (1 to 10): ";
    cin >> enteredNumber;

    if(enteredNumber == randomNumber) {
      cout << "Yay! You guessed correctly!";
      isTryAgain = "n";
    } else if(enteredNumber > randomNumber) {
      cout << "The number you entered is greater than the random number " << endl;
      cout << "Do you want to try again? (Y/N) ";
      cin >> isTryAgain;
    } else if(enteredNumber < randomNumber) {
      cout << "The number you entered is lesser than the random number" << endl;
      cout << "Do you want to try again? (Y/N) ";
      cin >> isTryAgain;
    }

    if(isTryAgain == "y") {
      tryAgain = true;
    } else {
      tryAgain = false;
    }
  }
}

int main() {
  int gameNumber;
  cout << "What game do you want to play?";
  cin >> gameNumber;
  if(gameNumber == 1) {
    guessMyNumber();
  }

}
