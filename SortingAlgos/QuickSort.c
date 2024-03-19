#include<stdio.h>
#include<stdlib.h>

int* QuickSort(int A[100],int n)
{
    int i,j,k,temp,count;
    int *pivot,*right,*left;

    for(k=0;k<n;k++)
    {
        pivot=&A[k];
        temp=A[n-1];
        A[n-1]=*pivot;
        *pivot=temp;

        for(i=0;i<n;i++)
        {
            if(A[i]>*pivot)
            {
                count=i;
                break;
            }
        }
        left=&A[count];
        for(i=n-1;i>=0;i--)
        {
            if(A[i]<*pivot)
            {
                count=i;
                break;
            }
        }
        right=&A[count];

        temp=*left;
        *left=*right;
        *right=temp;


    }
    return A;
}


main()
{
    int A[100]={3,4,2,5,6,7,2,8,3},*ptr=&A[0];
    ptr=QuickSort(A,5);
    int i;
    for(i=0;i<9;i++)
    {
        printf(" %d ",A[i]);
    }
}
