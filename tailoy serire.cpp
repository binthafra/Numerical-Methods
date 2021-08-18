#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define h 0.1
double f(double x,double y)
{
    return x+y;
}
double ff(double x,double y)
{
    return 1+f(x,y);
}
double fff(double x, double y)
{
    return ff(x,y);
}
double ffff(double x, double y)
{
    return  fff(x,y);
}
void taylor(double x,double y[])
{
    int i;
    cout << "i\t\tx\t\ty " << endl;
    for ( i=1; i<=4; i++)
    {
        y[i+1]=y[i]+h*f(x,y[i] ) + (h*h/2)*ff(x,y[i]) + (pow(h,3)/6)*fff(x,y[i])+ (pow(h,4)/24)*ffff(x,y[i]) ;
        cout << i << "\t\t" << setprecision(1)<<fixed << x << "\t\t" <<  setprecision(5) << fixed << y[i] << endl;
        x= x+ h;
    }
}

int main()
{
    double x0,y[100];
    cout << "Enter x0 and y0 : ";
    cin >> x0 >> y[0];
    taylor(x0,y);
    return 0;
}
