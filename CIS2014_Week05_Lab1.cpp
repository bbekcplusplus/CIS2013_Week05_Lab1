#include <iostream>
using namespace std:

	int add_numbers(int x, int y) {
	return x + y;
}

int main() {
	int first;
	int second;

	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	
	cout << "The result of calling add numbers is: " << add_numbers(first, second) << endl;
}