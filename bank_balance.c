#include <stdio.h>

struct BankAccount
{
    int accountNumber;
    char holderName[50];
    float balance;
};

void deposit(struct BankAccount *account, float amount)
{
    account->balance=account->balance+amount;
}

void withdraw(struct BankAccount *account, float amount)
{
    if (account->balance>=amount)
        account->balance=account->balance-amount;
    else
        printf("Insufficient balance\n");
}

void displayBalance(struct BankAccount account)
{
    printf("Account Number: %d\n",account.accountNumber);
    printf("Holder Name: %s\n",account.holderName);
    printf("Balance: %.2f\n",account.balance);
}

int main()
{
    struct BankAccount acc={20000,"Amish",1000.0};
    deposit(&acc,500.0);
    withdraw(&acc,200.0);
    displayBalance(acc);
    return 0;
}
