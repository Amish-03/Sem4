#include<stdio.h>

main()
{
    int n;
    FILE *ptr;
    ptr=fopen("SumOfDigits.txt","w");
    printf("Enter number: ");
    scanf("%d",&n);

    int sum=SumOfDigits(n);
    fprintf(ptr,"Sum of digits of %d is %d",n,sum);
    fclose(ptr);
}

int SumOfDigits(int n)
{
    int digit,sum=0;
    int temp=n;
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    return sum;
}
