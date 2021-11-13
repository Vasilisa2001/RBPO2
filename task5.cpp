#include <iostream>
#include <iomanip> 
using namespace std;

double x, result;

void f();

int main()
{
	x = 10;
	cout << "x = " << x << endl;
	f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	f();
	cout << "f = " << setprecision(4) << result << endl;


}

void f() {
	result = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
}

