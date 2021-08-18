#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) exp(x)

int main()
{
    int i, n;
    float a, b, I=0.0, h, x;

    printf("Enter lower limit of integration: ");
    scanf("%f", &a);
    printf("Enter upper limit of integration: ");
    scanf("%f", &b);
    printf("Enter number of sub intervals: ");
    scanf("%d", &n);
    h = (b-a)/n;
    I=f(a)+f(b);
    for(i=1; i<n; i++)
    {
        x=a+i*h;
        if(i%2==0)
        {
            I=I+2*f(x);
        }
        else
        {
            I=I+4*f(x);
        }
        //printf("\nx%d=%f  \t y%d=%f",i,x,i,I);
    }
    I=I*(h/3);
    printf("\nRequired value of integration is: %.3f", I);
    getch();
}
