#include <iostream>
using namespace std;
int main()
{
	int a,b;
	a = (b=4, b + 7);
	cout << "a=(b=4, b+7):" << a << endl;
	
	int x;
	int y = 10;
	int z = 5;
	
	x = (y < z) ? y - z : z - y;
	cout << "(y < z) ? y-z : z-y: " << x << endl;
	
	return 0;
}