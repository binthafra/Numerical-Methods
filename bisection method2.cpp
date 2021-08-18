#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#define f(x) x*x*x-x-1

int main()
{
    float x0,x1,x2,f1,f2,f0;
    int k = 0;
    do{
        printf("Enter the value of x1:");
        scanf("%f",&x1);
        printf("Enter the value of x2 :");
        scanf("%f",&x2);

    }while(f(x1)*f(x2) > 0);
    do {
        f1=f(x1);
        f2=f(x2);
        x0=(x1+x2)/2;
        f0=f(x0);
        if(f1*f0<0)
        {
            x2=x0;
        }
        else{
            x1=x0;
        }
        k++;
        printf("no of iteration = %d\t",k);
        printf("no of root = %f\t",x0);
        printf("value of function = %f\n",f(x0));


    }while(fabs(f(x0))> .001);
    printf("\n root is %f   and no. of iteration is %d",x0,k);

    return 0;
}


