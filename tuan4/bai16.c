#include <stdio.h>

#define SIZE 3 

int main()
{
    int A[SIZE][SIZE]; // Ma tran 1
    int B[SIZE][SIZE]; // Ma tran 2
    int C[SIZE][SIZE]; // Ket qua ma tran

    int row, col;

    printf("Nhap gia tri cua ma tran A voi kich thuoc 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("\n Nhap gia tri cua ma tran B voi kich thuoc 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    for(row=0; row<SIZE; row++) {
        for(col=0; col<SIZE; col++){
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("\nKet qua ma tran A+B la = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
