
#include <iostream>
using namespace std;
int main()
{
    int fmat[3][3], Smat[3];;
    cout<<"Enter the Faculty matrix\n";
    for(int i=0;i<3;i++)
        for(int k=0;k<3;k++)
            cin>>fmat[i][k];

    cout<<"Enter the Salary matrix\n";
    for(int h=0;h<3;h++)
        cin>>Smat[h];

    //finding determinant
    int det=0;
    for(int i = 0; i < 3; i++)
		{det = det + (fmat[0][i]*(fmat[1][(i+1)%3]*fmat[2][(i+2)%3] - fmat[1][(i+2)%3]*fmat[2][(i+1)%3])); }

    //finding transposing
    int transmat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            transmat[k][i] = fmat[i][k];
        }
    }

    //Cofactor matrix
    int co_mat[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            co_mat[i][j]=transmat[(i + 1) % 3][(j + 1) % 3]
        * transmat[(i + 2) % 3][(j + 2) % 3]
        - transmat[(i + 1) % 3][(j + 2) % 3]
        * transmat[(i + 2) % 3][(j + 1) % 3];
        }
    }
    cout<<"Multiplication Matrxi"<<endl;
    int mulmat[3];
    for(int m=0;m<3;m++)
    {
        int value=0;
        for(int n=0;n<3;n++)
        {
            value+=co_mat[m][n] * Smat[n];
        }
        mulmat[m]=value;
        cout<<mulmat[m]<<endl;
    }

    cout<<"Salary of each faculty: \n";
    for(int i=0;i<3;i++)
        cout<<(mulmat[i]/ det )<<endl;


    return 0;
}

