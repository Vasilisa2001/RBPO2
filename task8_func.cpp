#include <iostream>
#include "func.h"
using namespace std;

double x = 10;
double result = 0;
void f() {
	result = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
}

