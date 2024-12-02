#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

string scramble (string &text) {
	string chars = text;
	for (int i=0; i<chars.length(); i++) {		
		int j = rand() % chars.length();
		char temp = chars[i];
		chars[i] = chars[j];
		chars[j] = temp;
	}
	
	return chars;
}

int main() {
	string words[5] = {"School", "Book", "Uniform", "Year", "Gender"};
	
	string scrambled[5];
	
	for (int i=0; i<5; i++) {
		scrambled[i] = scramble(words[i]);
		cout << "Scrambled words: " << (i+1) << ": " << scrambled[i] << endl;
		
	}
	
	cout<< "Guess the word" << endl;
	
	string guess1, guess2, guess3, guess4, guess5;
	cin >> guess1 >> endl;
	
}