//program to solve non-linear equation using Newton?s method
#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;


// The function is x^3 - x^2 + 2
double func(double x)
{
	return x*x*x - x*x + 2;
}

// Derivative of the above function which is 3*x^2 - 2*x
double derivFunc(double x)
{
	return 3*x*x - 2*x;
}


void newtonRaphson(double x)
{
    int i=0;
	double h = func(x) / derivFunc(x);
	while (abs(h) >= EPSILON)
	{
		h = func(x)/derivFunc(x);


		x = x - h;
        i++;
	}
    int ans = x;
	cout << "The value of the root is : " << x<<endl;
    cout<<"Functional value at root is: "<<func(ans)<<endl;
    cout<<"Iteration is: "<<i<<endl;
}


int main()
{
	double x0 = -20;
	newtonRaphson(x0);
	return 0;
}
