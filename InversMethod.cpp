#include<stdio.h>

int main()
{
    int mat[3][3], i, j,A[3][3],b[3][3],result[10][10] ,Salarymatrix[3];;
    float determinant = 0;

    printf("Enter elements of matrix row wise for A:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    printf("Input the elements of Salary matrix\n");
    for(int h=0;h<3;h++)
        scanf("%d",Salarymatrix[h]);

    printf("\nGiven matrix is:");
    for(i = 0; i < 3; i++)
    {
        printf("\n");

        for(j = 0; j < 3; j++)
            printf("%d\t", mat[i][j]);
    }


    //finding determinant
    for(i = 0; i < 3; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

    printf("\n\ndeterminant: %f\n", determinant);

    printf("\nInverse of matrix is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            //A[j][i]= ((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);
            printf("%.3f\t",((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);
        // printf("%.3f\t", A[i][j]);
        printf("\n");
    }
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    //int result[3];
//    for(int h=0;h<3;h++)
//    {
//        int val=0;
//        for(int g=0;g<3;g++)
//        {
//            val+=cofactor_matrix[h][g] * mat[g];
//        }
//        result[h]=val;
//        cout<<result[h]<<endl;
//    }

    for ( i = 0; i < 3; ++i)
    {
        for ( j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += mat[i][k] * b[k][j];

            }
        }
        printf("%.3f\t", result[i][j]);
        printf("\n");
    }

    return 0;
}
