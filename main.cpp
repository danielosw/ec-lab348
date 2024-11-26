#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
double extractNumeric(const string &str) {
  double store = 0;
  bool isDecimal = false;
  for (int i = 0; i < str.length(); i++) {
    switch (str[i]) {
    case '1':
      return 1;
      break;
    case '2':
      return 2;
      break;
    case '3':
      return 3;
      break;
	case '4':
	  return 4;
	  break;
	case '5':
	  return 5;
	  break;
	case '6':
	  return 6;
	  break;
	case '7':
	  return 7;
	  break;
	case '8':
	  return 8;
	  break;
	case '9':
	  return 9;
    }
  }
  return -999999.99;
};

int main() {
  string input;
  while (true) {
    cout << "Enter a string (or 'END' to quit): ";
    cin >> input;
    if (input == "END") {
      break;
    }
    double number = extractNumeric(input);
    if (number != -999999.99) {
      cout << "The input is: " << fixed << setprecision(4) << number << endl;
    } else {
      cout << "The input is invalid" << endl;
    }
  }
  return 0;
}
