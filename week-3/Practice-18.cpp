#include <iostream>
using namespace std;

long factorial (long a) {
	if (a>1)
	return (a * factorial(a-1));
	else
	return 1;
}


int main() {
	long number;
	cout << "Enter the number: ";
	cin >> number;
	cout << number << "! = " << factorial (number);
	return 0;
}