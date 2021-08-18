#include<stdio.h>
#include<math.h>
double f(double x, double y){
    return ((2*y)/x);
}
main(){
    int i;
    double y,x0,y0,xr,h;
    printf("Enter the initial value for x: ");
    scanf("%lf",&x0);
    printf("Enter the initial value for y: ");
    scanf("%lf",&y0);
    printf("Enter the value required of: ");
    scanf("%lf",&xr);
    printf("Enter value h: ");
    scanf("%lf",&h);
    printf("x\t\ty\n");

    while(x0<=xr){
        y=y0+h*f(x0,y0);
        printf("%lf\t%lf\n",x0,y0);
        y0=y;
        x0=x0+h;
    }
}
