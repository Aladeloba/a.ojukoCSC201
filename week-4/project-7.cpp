#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Input the value of array" << endl;
	cin >> n;
	
	int arr[n];
	
	cout << "Input " << n << " values" << endl;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	} 
	
	int max = arr[0];
	int min = arr[0];
	
	for (int i=1; i<n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	
	cout << "Minimum value = " << min << endl;
	cout << "Maximum value = " << max << endl;
}