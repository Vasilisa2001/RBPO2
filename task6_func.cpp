#include <iostream>
#include <iomanip> 
using namespace std;

double f(double x) {
	return (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
}
