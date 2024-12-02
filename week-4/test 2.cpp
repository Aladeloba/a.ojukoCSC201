#include <iostream>
using namespace std;

int main() {
	char char1;
	cout << "Input your character" << endl;
	cin >> char1;
	
	if (char1 % 2 == 0) {
		cout << char1<< " is a consonant";
	}
	else if (char1 % 2 == 1) {
		cout << char1 << " is a vowel";
	}
	
	return 0;
}