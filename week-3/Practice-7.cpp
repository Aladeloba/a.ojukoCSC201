#include <iostream>
using namespace std;


int main() {
	cout << "Input your score";
	int score;
	cin >> score;
	if(score>=70 && score<=100) {
		cout << "Grade A" << endl;
		cout << "Excellent" << endl;}
	else if (score>=60 && score<70){
		cout << "Grade B" << endl << "Very Good" << endl;}
	else if (score>=50 && score<60)
		cout << "Grade C" << endl << "Good" << endl;
	else if (score>=45 && score<50)
		cout << "Grade D" << endl << "Average" << endl;
	else if (score>=40 && score<45)
		cout << "Grade E" << endl << "Pass" << endl;
	else if (score>=0 && score<40)
		cout << "Grade F" << endl << "Fail" << endl;
	else
		cout << "Enter Valid Score" << endl;
		
	return 0;
}