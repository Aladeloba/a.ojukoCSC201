// arrays example summing up value in an array
#include <iostream>
using namespace std;

int score[] = {6,3,4,2,4};
int n, result=0;
int main() {
	for (n=0;n<10;n++){
		result += score[n];
	}
	cout << result << endl;
	cout << score[5] << "\n" << score[6] << "\n" << score[7] << "\n" << score[8] << "\n" << score[9];
	return 0;
}