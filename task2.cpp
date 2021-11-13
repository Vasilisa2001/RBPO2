#include <iostream>
#include <iomanip> 
using namespace std;

double f(double x) {
	return (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
}

int main()
{
	double x = 10;
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f(x) << endl;

	cout << "x = ";
	cin >> x;
	cout << "f = " << setprecision(4) << f(x) << endl;
}

