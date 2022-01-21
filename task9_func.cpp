#include "func1.h"

double x = 10;
double result = 0;

namespace Myasnikova {
	void f() {
		result = (sqrt(2 * x + 2 * sqrt(x * x - 4))) / (sqrt(x * x - 4) + x + 2);
	}
}
