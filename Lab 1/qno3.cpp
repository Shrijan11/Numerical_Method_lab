//program to solve non-linear equation using Secant method
#include <iostream>
#include <cmath>
#define Error 0.001

using namespace std;


float f(float x)
{
	// taking equation as x^3+x-1
	float f = pow(x, 3) + x - 1;
	return f;
}

void secant(float x1, float x2, float E)
{
	float n = 0, xm, x0, c;
	if (f(x1) * f(x2) < 0) {
		do {
			x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

			c = f(x1) * f(x0);

			x1 = x2;
			x2 = x0;

			n++;

			if (c == 0)
				break;
			xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
		} while (fabs(xm - x0) >= Error); // repeat the loop
								// until the convergence

		cout << "Root of the given equation=" << x0 << endl;
		cout << "No. of iterations = " << n << endl;
        cout<<"Functional Value at calculated root= "<<f(x0)<<endl;
	} else
		cout << "Can not find a root in the given interval";
}

int main()
{
	float x1 = 0, x2 = 1;
	secant(x1, x2, Error);
	return 0;

}
