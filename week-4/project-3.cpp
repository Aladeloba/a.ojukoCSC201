#include <iostream>
#include <string>
using namespace std;

int main() {
	string string1, string2;
	cout << "Input String 1" << endl;
	getline(cin, string1);
	cout << "Input String 2" << endl;
	cin >> string2;
	
	cout << string1.length();	
}
