/*
Author : SolarFlare
Program: Simple Fizzbuzz program
*/

//Include input/output stream
#include <iostream>
//Using standard namespace
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		//If the input can be divided by 3 or 5 with no remainder
		if ((i % 3 == 0) && (i % 5 == 0)) {
			cout << "Fizzbuzz" << endl;
		}
		//If the input can be divided by 3 with no remainder
		else if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		//If the input can be divided by 3 with no remainder
		else if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	//Await user input before ending
	cin.get();
}