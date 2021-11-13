#include <iostream>
#include <iomanip> 
using namespace std;

double x, result;

void f() {
	result = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
}

