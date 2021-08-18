#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    return (x+y*y);
}
int main()
{
    float xi,yi,m1,m2,m3,m4,m,y,x,h,xn;
    printf("Enter value for x and y\n");
    scanf("%f %f",&xi,&yi);
    printf("Enter value required value of x\n");
    scanf("%f",&xn);
    printf("Enter value of h\n");
    scanf("%f",&h);
    printf("\n\nX\t\tY\n");
    while(xi<=xn)
    {
        m1=f(xi,yi);
        m2=f((xi+h/2),(yi+m1*h/2));
        m3=f((xi+h/2),(yi+m2*h/2));
        m4=f((xi+h),(yi+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        printf("%f\t%f\n",xi,yi);
        yi=yi+(m*h);
        xi=xi+h;

    }
}

