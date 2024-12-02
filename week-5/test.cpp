#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

string scramble(string &text) {
    string chars = text;
    for (int i = 0; i < chars.length(); i++) {
        int j = rand() % chars.length();
        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
    }
    return chars;
}

int main() {
    // Array with words to scramble
    string words[5] = {"School", "Book", "Uniform", "Year", "Gender"};
    
    // Array to store scrambled words
    string scrambled[5];
    
    // Scramble the words and store in scrambled array
    for (int i = 0; i < 5; i++) {
        scrambled[i] = scramble(words[i]);
        cout << "Scrambled word " << (i + 1) << ": " << scrambled[i] << endl;
    }
    
    cout << "Guess the words!" << endl;

    // Variables to store user guesses
    string guess1, guess2, guess3, guess4, guess5;
    
    // Get user guesses
    cin >> guess1 >> guess2 >> guess3 >> guess4 >> guess5;

    // Check the guesses (Example: You can compare them with the original words)
    if (guess1 == words[0] && guess2 == words[1] && guess3 == words[2] && guess4 == words[3] && guess5 == words[4]) {
        cout << "Correct! You guessed all words correctly!" << endl;
    } else {
        cout << "Some guesses were incorrect. Try again!" << endl;
    }

    return 0;
}
