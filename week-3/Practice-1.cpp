#include <iostream>
using namespace std;

int main() {
	int j; // define a loop variable
	for(j=0; j<15; j+=2) // loop from 0 to 14;
		cout << j * j << endl; // displaying the square of j
	cout << endl;
	

	for (int k=15, m=1; k<=15 && m<=14; k-=2, m+=2)
	{
		cout << k << "\t" << m << "\t"  << k * m << endl;
	}
	return 0;
}