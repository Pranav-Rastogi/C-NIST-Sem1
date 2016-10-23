#include<stdio.h>

int main(void)
{
    int i, j, A[2][2], B[2][2], C[2][2]={0};

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &A[i][j]);

    printf("\n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &B[i][j]);

    // **ADDITION**
    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
            printf("%d\t", A[i][j] + B[i][j]);
    }

    // **SUBTRACTION **
    printf("\n");

    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
            printf("%d\t", A[i][j] - B[i][j]);
    }

    // ** MULTIPLICATION **
    printf("\n");

    int k, c, d;
    for (c = 0; c < 2; c++)
        for (d = 0; d < 2; d++)
            for (k = 0; k < 2; k++)
                C[c][d] = C[c][d] + A[c][k]*B[k][d];

    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<2; j++)
            printf("%d\t", C[i][j]);
    }

    return 0;
}
