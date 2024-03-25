#include<stdio.h>

main()
{
    FILE *optr;
    optr=fopen("Factorial.txt","w");
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    int k=fact(n);
    fprintf(optr,"Factorial of %d is %d\n",n,k);
    fclose(optr);
}

int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
}
