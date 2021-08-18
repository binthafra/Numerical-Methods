#include<stdio.h>
#include<conio.h>

int main()
{
    int a[6], n, r, i, q[6];
    printf("\t\tSYNTHETIC DIVISION");
    printf("\n Enter the highest degree of the equation: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        printf("\n Coefficient x[%d] = ", n-i);
        scanf("%d",&a[i]);
    }

    printf("\n Enter the value of constant in (x-r) : ");
    scanf("%d",&r);
    q[0] = a[0];
    for(i=1; i<=n; i++)
    {
        q[i] = (q[i-1]*r)+a[i];

    }

    printf("\n Coefficients of quotient are: \n");
    for(i=0; i<n; i++)
    {
        //printf("b%d = %d\n",i,q[i]);
        printf("\t%d",q[i]);
    }
    printf("\n Remainder is: %d", q[n]);


}
