#include<stdio.h>

int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
}

main()
{
    int a=5;
    printf("%d",fact(3));
}
