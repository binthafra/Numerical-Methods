#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int s=(int)x;
    double t=fabs(x-s);
    printf("%f\n",t);
    if((t<0.5)||(t==0.5 && s%2==0))
    {
        printf("%d",s);
    }
    else{
        if(x<0){

            printf("%d",s-1);
        }
        else
        {
           printf("%d",s+1);
        }
    }
    return 0;
}
