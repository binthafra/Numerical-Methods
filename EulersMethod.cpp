//Solve the equation  = 1 – y,
//with theinitial condition
//x = 0, y = 0, using Euler’s method   tabulate the solutions at x = 0.1, 0.2, 0.3
#include<stdio.h>
#include<math.h>
float f(float x, float y){
    return (1-y);
}
int main(){
    printf("Solving Equation using eulers method :\n ");
    int i;
    float y,x0,y0,xr,h;
    printf("Enter the initial value for x0 & y0 :\n ");
    scanf("%f%f",&x0,&y0);
    printf("Enter the value required of x: ");
    scanf("%f",&xr);
    //h=0.2-0.1=0.1
    printf("Enter value h: ");
    scanf("%f",&h);
    printf("x\ty\n");

    while(x0<=xr){
        y=y0+h*f(x0,y0);
        printf("%.3f\t%.3f\n",x0,y0);
        y0=y;
        x0=x0+h;
    }
}
