#include<stdio.h>

void insertionSort(int A[], int n)
{
    int i, key, j;
    for (i=1;i<n;i++)
    {
        key=A[i];
        j = i-1;
        while (j>=0&&A[j]>key)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}

main()
{
    FILE *iptr,*optr;
    iptr=fopen("Input.txt","r");
    optr=fopen("InsertionSort.txt","w");

    int n=10,A[20];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(iptr,"%d",&A[i]);
    }

    int num;
    insertionSort(A,n);
    printf("Sorting Done!");
    for(i=0;i<n;i++)
    {
        fprintf(optr,"%d\n",A[i]);
    }

    fclose(iptr);
    fclose(optr);

}



