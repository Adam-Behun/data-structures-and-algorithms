#include <iostream>
using namespace std;

int main() {
  int dogAgeYears;

  cout << "Enter dog's age in years: ";
  cin >> dogAgeYears;

  switch (dogAgeYears) {
    
    case 0:
      cout << "That's 0..14 human years" << endl;
      break;
    
    case 1:
      cout << "That's 15 human years" << endl;
      break;
    
    case 2:
      cout << "That's 24 human years" << endl;
      break;

    case 3:
      cout << "That's 28 human years" << endl;
      break;

    case 4:
      cout << "That's 32 human years" << endl;
      break;
    
    case 5:
      cout << "That's 37 human years" << endl;
      break;
    
    default:
      cout << "Human years unknown." << endl;
      break;
  } 
  return 0;
}