#include<stdio.h>

void SelectionSort(int A[100],int n)
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

}

main()
{
    FILE *iptr,*optr;
    iptr=fopen("Input.txt","r");
    optr=fopen("SelectionSort.txt","w");

    int n=10,A[20];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(iptr,"%d",&A[i]);
    }

    int num;
    SelectionSort(A,n);
    printf("Sorting Done!");
    for(i=0;i<n;i++)
    {
        fprintf(optr,"%d\n",A[i]);
    }

    fclose(iptr);
    fclose(optr);

}

