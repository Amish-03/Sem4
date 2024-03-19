#include<stdio.h>

int* SelectionSort(int A[100],int n)
{
    int i,j;
    int temp;

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }

        }
    }
    return A;
}

main()
{
    int A[100]={3,4,2,5,1},*ptr=&A[0];
    ptr=SelectionSort(A,5);
    int i;
    for(i=0;i<5;i++)
    {
        printf(" %d ",A[i]);
    }
}
