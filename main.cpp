#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double extractNumeric(const string& str){
	double store = 0;
	bool isDecimal = false;
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
			case ""
			default:
				return -999999.99;	
				break;
		}
	}
	return -999999.99;
};

int main(){
	string input;
	while (true){
		cout << "Enter a string (or 'END' to quit): ";
		cin >> input;
		if(input == "END"){
			break;
		}
		double number = extractNumeric(input);
		if (number != -999999.99){
			cout << "The input is: " << fixed << setprecision(4)
				<< number << endl;
		} else {
			cout << "The input is invalid" << endl;
		}
	}
	return 0;
}
