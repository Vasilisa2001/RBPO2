#include <iostream>
#include <iomanip> 
#include "func1.h";

using namespace std;

int main()
{
	cout << "x = " << x << endl;
	Myasnikova::f();
	cout << "f = " << setprecision(4) << result << endl;

	cout << "x = ";
	cin >> x;
	Myasnikova::f();
	cout << "f = " << setprecision(4) << result << endl;


}
