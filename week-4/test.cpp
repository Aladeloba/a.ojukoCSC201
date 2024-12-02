#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	
	cout << "Input number:" << endl;
	cin >> a;
	
	for(int c=0; c<=a; c++){
		for(b=0; b<=12; b++){
			cout << c << "x" << b << "=" << c * b << "\t"; 
		}
		cout << endl;
	}
	
	return 1;
}