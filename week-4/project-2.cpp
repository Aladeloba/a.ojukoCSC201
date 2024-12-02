#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    // Input limits
    cout << "Please input upper limit: ";
    cin >> a;
    cout << "Please input lower limit: ";
    cin >> b;

    // Check if upper limit is actually higher
    while (a < b) {
        cout << "Your lower limit is higher than your upper limit. Please re-enter.\n";
        cout << "Please input upper limit: ";
        cin >> a;
        cout << "Please input lower limit: ";
        cin >> b;
    }
    
    // Calculate sum of odd numbers
    int sum = 0;
    for (int i = a-1; i >= b+1; i--) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
        sum += i;
    }
    
    cout << "Sum of all odd numbers from " << a << " to " << b << " is " << sum << endl;
    return 0;
}
