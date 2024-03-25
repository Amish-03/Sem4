#include<stdio.h>
#include<math.h>
main()
{
    int n;
    FILE *ptr;
    ptr=fopen("RevNum.txt","w");
    printf("Enter number: ");
    scanf("%d",&n);
    int rev=RevNum(n);
    printf("%d reversed is %d",n,rev);
    fprintf(ptr,"%d reversed is %d",n,rev);
}

int RevNum(int n)
{
    int rev = 0;

    while (n != 0)
        {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

