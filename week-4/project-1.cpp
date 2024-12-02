#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Please input a number: ";
	cin >> n;
	
	for (int j=0; j<=n; j++){
		for (int i=0; i<=12; i++) {
			cout << j << "x" << i << "=" << j * i << "\t"; 
		}
		cout << endl;
	}
}

