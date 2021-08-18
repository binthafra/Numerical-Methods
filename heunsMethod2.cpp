#include<stdio.h>
float f(float x,float y)
{
    return (2*y)/x;
}
int main()
{
    int i;
    float xf,x,y,ye,h,k1,k2,n;
    printf("Enter value of x: ");
    scanf("%f", &x);
    printf("Enter value of y: ");
    scanf("%f",&y);
    printf("Enter stepsize: ");
    scanf("%f", &h);
    printf("Enter final x value: ");
    scanf("%f", &xf);
    n = (xf-x)/h;
    for(i=1; i<=n; i++)
    {
        k1 = f(x,y);
        printf("k1 = %f\n", k1);
        ye = y + k1 * h;
        k2 = f(x+h,y+h);
        y = y+((k1+k2)/2)*h;
        x += h;
        printf("%f %f\n", x,y);
    }
    return 0;
}
