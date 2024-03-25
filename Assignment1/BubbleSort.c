#include<stdio.h>

void bubbleSort(int A[100],int n)
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

}

main()
{
    FILE *iptr,*optr;
    iptr=fopen("Input.txt","r");
    optr=fopen("BubbleSort.txt","w");

    int n=10,A[20];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(iptr,"%d",&A[i]);
    }

    int num;
    bubbleSort(A,n);
    printf("Sorting Done!");
    for(i=0;i<n;i++)
    {
        fprintf(optr,"%d\n",A[i]);
    }

    fclose(iptr);
    fclose(optr);

}


