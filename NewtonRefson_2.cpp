//Double Root using Newton Ralphson method
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x-2*x+1;
}
float fd(float x)
{
    return 2*x-2;
}
float fdd(float x)
{
    return 2;
}
int main ()
{
    float a,b,c;
    printf("Enter the initial sol\n");
    scanf("%f",&a);
    b=a;
    for(int i=0; fabs(a-c)>0.1; i++)
    {
        a=a-f(a)/fd(a);
        b=b-fd(b)/fdd(b);
        c=b;
    }
    printf("The Double root is %0.4f\n",b);
}
/*OUTPUT
Enter the initial sol
6
The Double root is 1.000000*/
