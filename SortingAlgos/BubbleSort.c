#include<stdio.h>

int* bubble_sort(int A[100],int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
            }
        }
    }
    return A;
}

main()
{
    int A[100]={3,4,2,5,1},*ptr=&A[0];
    ptr=bubble_sort(A,5);
    int i;
    for(i=0;i<5;i++)
    {
        printf(" %d ",A[i]);
    }
}
