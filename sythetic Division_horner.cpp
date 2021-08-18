#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[6],b[6],x;
    printf(" Synthetic division\n");
    printf("Enter degree of polynomial\n");
    scanf("%d",&n);
    printf("Enter values for a0, a1, a2, .....\n");
    for(i=0; i<=n; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\n Enter the value of constant in (x-r) : ");
    scanf("%d",&x);
    b[0] = a[0];
    for(i=1; i<=n; i++)
    {
        b[i] = (b[i-1]*x)+a[i];
    }

    printf("\n Coefficients of quotient are: \n");
    for(i=0; i<n; i++)
    {

        printf("\t%d",b[i]);
    }
    printf("\n Remainder is: %d", b[n]);
    return 0;

}
