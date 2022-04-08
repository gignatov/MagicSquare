#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Test A
    int A[3][3] = {{ 2, 7, 6 },
                   { 9, 5, 1 },
                   { 4, 3, 8 }};
    //Code
    size_t n = sizeof(A) / sizeof(A[0]);
    size_t m = sizeof(A[0]) / sizeof(A[0][0]);
    if (n != m)
                return 0;
    int i, j, diag1 = 0, diag2 = 0, row, col;
    for (i = 0; i < n; i++)
        {
            diag1 += A[i][i];
            diag2 += A[i][n-1-i];
        }
    if (diag1 != diag2)
        return 0;
    for (i = 0; i < n; i++)
    {
        row = 0;
        col = 0;
        for (j = 0; j < n; j++)
        {
            row += A[i][j];
            col += A[j][i];
        }
        if (row != col || row != diag1)
                return 0;
    }
    return 1;
}
