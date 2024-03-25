#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main()
{
    FILE *optr;
    optr=fopen("prime.txt", "w");



    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (isPrime(n))
    {
        printf("%d is a prime number.\n", n);
        fprintf(optr, "%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
        fprintf(optr, "%d is not a prime number.\n", n);
    }

    fclose(optr);
    return 0;
}

bool isPrime(int n)
{
    if (n <= 1)
        {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
