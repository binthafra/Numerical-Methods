#include<stdio.h>
#include<math.h>
float f(float x, float y){
    return ((2*y)/x);
}
int main()
{
    float x,y,h,xr,m1,m2;
    printf("Enter value for x and y\n");
    scanf("%f",&x,&y);
    printf("Enter value required value of x\n");
    scanf("%f%f",&xr);
    printf("Enter value of h\n");
    scanf("%f",&h);
    printf("x\t\ty\n");
    while(x<=xr)
    {
        m1=f(x,y);
        m2=f(x+h,y+h*m1);
        printf("%f\t%f\n",x,y);
        y=y+(h/2)*(m1+m2);
        x=x+h;
    }

}
