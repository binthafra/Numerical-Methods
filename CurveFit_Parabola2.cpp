#include<stdio.h>
#include<math.h>
int main(){
    float x[10],y[10], matrix[3][4], r, a,sum=0.0;
    float sum_x = 0, sum_y = 0, sum_x2 = 0, sum_x3 = 0;
    float sum_x4 = 0, sum_xy = 0, sum_x2y = 0;
    int i, j , k, n;
    printf("Enter no of data: ");
    scanf("%d", &n);

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

    for(i = 0; i < n; i++){
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += pow(x[i],2);
        sum_x3 += pow(x[i],3);
        sum_x4 += pow(x[i],4);
        sum_xy += x[i]*y[i];
        sum_x2y += pow(x[i],2)*y[i];
    }
    matrix[0][0] = n;
    matrix[0][1] = sum_x;
    matrix[0][2] = sum_x2;
    matrix[0][3] = sum_y;
    matrix[1][0] = sum_x;
    matrix[1][1] = sum_x2;
    matrix[1][2] = sum_x3;
    matrix[1][3] = sum_xy;
    matrix[2][0] = sum_x2;
    matrix[2][1] = sum_x3;
    matrix[2][2] = sum_x4;
    matrix[2][3] = sum_x2y;

    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){
            if(i>j){
                r = matrix[i][j]/matrix[j][j];
                for(k = 0; k < 4; k++){
                    matrix[i][k]=matrix[i][k]-r*matrix[j][k];
                }
            }
        }
    }
    x[2]=matrix[2][3]/matrix[2][2];
    for(i=1; i>=0; i--)
    {
        sum=0;
        for(j=i+1; j<=2; j++)
        {
            sum=sum+matrix[i][j]*x[j];
        }
        x[i]=(matrix[i][2+1]-sum)/matrix[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=0; i<=2; i++)
    {
        printf("\na%d=%f\t",i,x[i]);
    }

}
