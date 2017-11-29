/*
	Author : SolarFlare
	Program: Simple Fizzbuzz Program
*/

//Include fizzbuzz header file
#include "Fizzbuzz.h"

int main() {
	fizzBuzz();
	return 0;
}

int fizzBuzz() {
	for (int i = 1; i <= 100; i++) {
		//If the input can be divided by 3 or 5 with no remainder
		if ((i % 3 == 0) && (i % 5 == 0)) {
			cout << "Fizzbuzz" << endl;
		}
		//If the input can be divided by 3 with no remainder
		else if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		//If the input can be divided by 5 with no remainder
		else if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	//Await user input before ending
	cin.get();
	return 0;
}