#include<stdio.h>

main()
{
    int n;
    FILE *ptr;
    ptr=fopen("Fibonacci.txt","w");

    printf("Enter limit: ");
    scanf("%d",&n);

    int A[100];
    fib(A,n);
    int i;
    for(i=0;i<n;i++)
    fprintf(ptr,"%d ",A[i]);

    fclose(ptr);
}

void fib(int A[100],int n)
{
    int i=2,j,count=2;
    A[0]=1;
    A[1]=1;
    while(count<=n)
    {
        A[i]=A[i-1]+A[i-2];
        i++;
        count++;
    }
    return A;
}
