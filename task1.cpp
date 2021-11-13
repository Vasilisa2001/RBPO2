#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
	double x = 10;

	double f = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
	cout << "x = " << x << endl;
	cout << "f = " << setprecision(4) << f << endl;

	cout << "x = ";
	cin >> x;
	f = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
	cout << "f = " << setprecision(4) << f << endl;

}
