// ADDING 3X3 MATRICES
#include <iostream>
using namespace std;

int main () {
	int matrix1 [3][3][3]= {2,4,6,3,5,7,1,3,1};
	int matrix2 [3][3][3]= {2,4,6,3,5,7,1,3,2};
	
	
	for (int i=0;i<1;i++) {
		for (int j=0; j<3; j++) {
			for (int k=0; k<3; k++) {
				int result = matrix1[i][j][k] + matrix2[i][j][k];
				cout << result << endl;
				}
		}
	}
	cout << endl << endl;
	
	// OR YOU COULD DO IT THIS WAY

	int matrix3 [3][3] = {{2,3,4},{3,4,5},{4,5,6}};
	int matrix4 [3][3] = {{1,3,5},{2,4,6},{3,5,7}};
	
	for (int a=0; a<3; a++){
		for (int b=0; b<3; b++) {
			int result2 = matrix3 [a][b] + matrix4 [a][b];
			cout << result2<< endl;
		}
	}
	
	return 0;
}