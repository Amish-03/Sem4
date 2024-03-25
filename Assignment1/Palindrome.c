#include<stdio.h>
#include<math.h>
main()
{
    int n;
    FILE *ptr;
    ptr=fopen("Palindrome.txt","w");
    printf("Enter number: ");
    scanf("%d",&n);
    int rev=RevNum(n);
    if(n==rev)
    {
        printf("%d is a palindrome",n);
        fprintf(ptr,"%d is a palindrome",n);

    }
    else
    {
        printf("%d is not a palindrome",n);
        fprintf(ptr,"%d is not a palindrome",n);
    }

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


