//program to solve non-linear equation using Half Interval method
#include <iostream>
using namespace std;
#define EPSILON 0.001
double a, b, c, d;


double func1(double x){
    return a*x*x*x+b*x*x+c*x+d;
}

void bisection1(double xl, double xu){
    int i=0;
    cout<<"Enter values for ax3+bx2+cx+d:"<<endl;

    cin>>a>>b>>c>>d;
    if(func1(xl)*func1(xu)>=0){
        cout<<"Wrong selection for xl and xu"<<endl;
    }
    double k = xl;
    while ((xu-xl) >= EPSILON)
    {

        k = (xl+xu)/2;


        if (func1(k) == 0.0)
            break;


        else if (func1(k)*func1(xl) < 0)
            xu = k;
        else
            xl = k;
        i++;
    }
    cout << "The value of root is : " << k<<endl;
    cout<<"Functional value at calculate root is: "<<func1(k)<<endl;
    cout<<"Required number of iterations: "<<i<<endl;
}

int main(){

    bisection1(-200, 300);
}
