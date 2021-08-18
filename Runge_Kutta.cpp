#include<stdio.h>
#include<conio.h>
double f(double x, double y)
{
    return (x+y*y);
}
int main()
{
    double x0, y0, xn, h, yn, m1, m2, m3, m4, m;
    int i, n;

    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    //printf("Enter number of steps: ");
    //scanf("%d", &n);
    printf("Enter value of h\n");
    scanf("%f",&h);
    //h = (xn-x0)/n;

    printf("\nx0\ty0\tyn\n");
    while(x0<=xn)
    {
        m1 =(f(x0,y0));
        m2 =(f((x0+h/2),(y0+m1/2)));
        m3 =(f((x0+h/2),(y0+m2/2)));
        m4 =(f((x0+h),(y0+m3)));
        m = (m1+(2*m2)+(2*m3)+m4)/6;
        yn = y0 + m;
        printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
        x0 = x0+h;
        y0 = yn;
    }

    printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);

    getch();
    return 0;
}
