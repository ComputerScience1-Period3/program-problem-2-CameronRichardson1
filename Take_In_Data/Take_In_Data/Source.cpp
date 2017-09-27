/*
Cameron Richardson - 9/25/2017 3rd Period
create varaiables and store data then display that data
*/
// Libraries
#include <iostream> //gives access to cin, cout,endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives accesss to _kbhit () and _getch () for pause ()

// Namespaces
using namespace std;

// Functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int number; // Whats your favorite number?
	char letter; // Favorite letter
	bool HS; //Are you in or not?
	double gas; // What is the gas price currently?

	int calc_1, calc_2, calc_3, calc_4, calc_5;
	
	// User Queries
	cout << "Whats your favorite number? (Whole Number)";
	cin >> number;
	cout << "What is the your favorite letter of the alaphabet : (Upper Case)";
	cin >> letter;
	cout << "Are you in High School yes (1) no (0) : (1/0) ";
	cin >> HS;
	cout << "What is the gas price? (to the nearest hundredth place) : ";
	cin >> gas;

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number : ";
	cin >> calc_2;
	cout << "Enter a number : ";
	cin >> calc_3;

	// After questions print out stored data
	cout << "Your favorite number is " << number << endl; // ENDL
	cout << "Your favorite letter is " << letter << '\n'; // a different way of going into a new line
	cout << boolalpha << "It is " << HS << " that you are in High School." << '\n';
	cout << "The gas price is : " << gas << endl;

	calc_5 = calc_1 - calc_2;
	cout << calc_1 << " - " << calc_2 << " = " << calc_1 - calc_2 << endl; //output doing math
	calc_4 = calc_1 * calc_3;
		cout << calc_1 << " * " << calc_3 << " = " << calc_4 << endl;
	if (calc_4 > calc_5) {
		cout << calc_4 << " greater than " << calc_5 << endl;
	}
	if (calc_4 < calc_5) {
		cout << calc_5 << "  greater than " << calc_4 << endl;
	}
	//pause
	pause();
}