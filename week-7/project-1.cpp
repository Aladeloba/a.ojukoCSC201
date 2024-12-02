#include <iostream>
#include <string>
#include <vector>
using namespace std;

void quiz() {
	string quiz[5][5] = {
		{"Question 1: What is the name of the President of Nigeria?",
		"A. Muhammadu Buhari B. Peter Obi C. Bola Ahmed Tinubu D. Aisha Yesufu"
		},
		{"Question 2: Who is the Deputy Vice Chancellor of PAU?",
		"A. Enase Okonedo B. Taiwo Ajayi C. James Idinego D. Peter Bamkole"
		},
		{"Question 3: Who is the current Governor of Lagos State?",
		"A. Akinwunmi Ambode B. Femi Falana C. Babajide Sanwo-olu D. Babatunde Fashola"
		},
		{"Question 4: Are coins still legal tenders in Nigeria?",
		"A. Yes B. No C. Maybe D. No Idea"
		},
		{"Question 5: What is the tallest buidling in the world?",
		"A. Cocoa House B. Taj Mahal C. Burj Khalifa  D. Petra"
		}
	};
	
	char answers_array[] = {'C','D','C','A','C'};
	
	vector<int> skipped_questions;
	char user_answer;
	int user_score = 0;
	
	for (int i=0; i<=4;i++) {
		cout << quiz[i][0] << endl;
		cout << quiz[i][1] << endl;
		cin >> user_answer;
		
	user_answer = toupper(user_answer);
	
	if (user_answer == answers_array[i]) {
		user_score++;
		}
	
	else if (user_answer == 'S') {
		cout << "Quetion Skipped!" << endl;
		skipped_questions.push_back(i);
		}
	}
	
	if (!skipped_questions.empty()) {
		cout << "SKIPPED QUESTIONS" << endl;
		for (int i:skipped_questions) {
			cout << quiz[i][0] << endl;
			cout << quiz[i][1] << endl;
			cin >> user_answer;
			
			user_answer = toupper(user_answer);
			
			if (user_answer == answers_array[i]) {
				user_score++;
				}
		}

	}
	
	cout << "Your final score is " << user_score << " out of 5" << endl;


}

void start_func() {
	quiz();
}


int main() {
	int start_value;
	
	while (true) {
		cout << "Welcome User, Press 1 to start the quiz or 0 to cancel." << endl;
		cin >> start_value;
		
		if (start_value == 1) {
			start_func();
			break;
		}
		
		else if (start_value == 0) {
			cout << "Quiz cancelled!" << endl;
			break;
		}
		
		else {
			cout << "Enter a valid Input!" << endl;
		}
	}
}