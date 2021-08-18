#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    float x[10],y[10],xsum=0,x2sum=0,ysum=0,xysum=0,a,d,b;
    printf("\nEnter the Value of n\n");
    scanf("%d",&n);
    printf("\nEnter the values of x\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter the values of y\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&y[i]);
    }
    for(i=0; i<n; i++)
    {
        xsum=xsum+x[i]; //summation(xi)
        ysum=ysum+y[i];  //summation(yi)
        x2sum=x2sum+pow(x[i],2);//calculate summation(x^2i)
        xysum=xysum+x[i]*y[i];
        printf("\nxsum : %f",xsum);
        printf("\nxysum : %f",xysum);
    }
    a=(x2sum*ysum-xsum*xysum)/(x2sum*n-xsum*xsum);
    b=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);

    printf("\nThe normal equations of straight line : \n");
    printf("\n%da + %.fb = %.f",n,xsum,ysum);
    printf("\na%.f + b%.f = %.f\n",xsum,x2sum,xysum);

    printf("\nThe values of a and b are : %f\t%f\n",a,b);

    printf("\nThe Required straight line Equation is : \n");

    printf("\ny=%f+%fx\n",a,b);

}
