#include <iostream>
#include<cmath>

using namespace std;

double Equat(double x);
double iteration(double (*pf)(double), double eps);

int main() {
	double (*pf)(double);
	double x, eps = 0.2624;
	x = iteration(Equat, eps);
	cout << x;

	return 0;
}
double iteration(double (*pf)(double), double eps) {

	double x, x0 = 0;

	x = pf(x0);
	
	do {
		x0 = x;
		x = pf(x0);
	} while (abs(x - x0) > eps);

	return x;
}

double Equat(double x)
{
	return 1 / (3 + sin(3.6 * x));
}

