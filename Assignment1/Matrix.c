#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 3

int matSum(int A[size][size], int B[size][size], int SUM[size][size])
{
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            SUM[i][j] = A[i][j]+B[i][j];
        }
    }
}

int matDiff(int A[size][size], int B[size][size], int DIFF[size][size])
{
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            DIFF[i][j] = A[i][j]-B[i][j];
        }
    }
}

int matMul(int A[size][size], int B[size][size], int MUL[size][size])
{
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<3;k++)
                MUL[i][j] += A[i][k] * B[k][j];
        }
    }
}

void printToFile(int SUM[size][size], int DIFF[size][size], int MUL[size][size], char *fileName)
{
    FILE *matrixFile = fopen(fileName, "w");
    fprintf(matrixFile, "Sum of matrix A & B:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            fprintf(matrixFile, "%d  ", SUM[i][j]);
        }
        fprintf(matrixFile, "\n");
    }
    fprintf(matrixFile, "\n");
    fprintf(matrixFile, "Difference of matrix A & B:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            fprintf(matrixFile, "%d  ", DIFF[i][j]);
        }
        fprintf(matrixFile, "\n");
    }
    fprintf(matrixFile, "\n");
    fprintf(matrixFile, "Product of matrix A & B:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            fprintf(matrixFile, "%d  ", MUL[i][j]);
        }
        fprintf(matrixFile, "\n");
    }
    fprintf(matrixFile, "\n");
    fclose(matrixFile);
}
int main()
{
    int A[size][size], B[size][size], i,j;
    int SUM[size][size] = {0};
    int DIFF[size][size] = {0};
    int MUL[size][size] = {0};
    printf("Order of matrix is 3\n");
    printf("Enter elements of A:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of B:\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    matSum(A, B, SUM);
    matDiff(A, B, DIFF);
    matMul(A, B, MUL);
    printToFile(SUM, DIFF, MUL, "matrixFile.txt");

    return 0;
}
