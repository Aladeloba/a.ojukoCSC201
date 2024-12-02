#include <iostream>
using namespace std;

int main() {
	char chinput;
	char chinput2;
	
	cout << "Input Character" << endl;
	cin >> chinput;
	
	chinput2 = tolower(chinput);
	
	if (chinput2 == 'a' || chinput == 'e' || chinput == 'i' || chinput == 'o' || chinput == 'u') {
		cout << chinput << " is a vowel";
		
	}
	else {
		cout << chinput << " is a consonant";
	}
	
	
}