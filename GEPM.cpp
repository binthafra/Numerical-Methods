#include <iostream>
#include <utility>

template <int N>
void MatrixSolve(double* x, double A[][N], double* b)
{
    int i, j, k;
    double U[N][N+1];

    // Copy A to U and augment with vector b.
    for (i = 0; i < N; i++)
    {
        U[i][N] = b[i];
        for (j = 0; j < N; j++)
            U[i][j] = A[i][j];
    }

    // Factorisation stage
    for (k = 0; k < N; k++)
    {
        // Find the best pivot
        int p = k;
        double maxPivot = 0.0;
        for (i = k; i < N; i++)
        {
            if (fabs(U[i][k] > maxPivot))
            {
                maxPivot = fabs(U[i][k]);
                p = i;
            }
        }

        // Swap rows k and p
        if (p != k)
        {
            for (i = k; i < N + 1; i++)
                std::swap(U[p][i], U[k][i]);
        }

        // Elimination of variables
        for (i = k + 1; i < N; i++)
        {
            double m = U[i][k] / U[k][k];
            for (j = k; j < N + 1; j++)
                U[i][j] -= m * U[k][j];
        }
    }

    // Back substitution
    for (int k = N - 1; k >= 0; k--)
    {
        double sum = U[k][N];
        for (int j = k + 1; j < N; j++)
            sum -= U[k][j] * x[j];
        x[k] = sum / U[k][k];
    }
}
