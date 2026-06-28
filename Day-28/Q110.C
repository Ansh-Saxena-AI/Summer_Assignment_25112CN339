//Write a program to Create bank account system.
#include <stdio.h>
#include <string.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank acc[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    while (1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &acc[n].accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Account Created Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Accounts Available.\n");
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    printf("\nAccount %d\n", i + 1);
                    printf("Account No : %d\n", acc[i].accNo);
                    printf("Name       : %s\n", acc[i].name);
                    printf("Balance    : %.2f\n", acc[i].balance);
                }
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    printf("Enter Amount to Deposit: ");
                    scanf("%f", &amount);
                    acc[i].balance += amount;
                    printf("Deposit Successful.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found.\n");
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    printf("Enter Amount to Withdraw: ");
                    scanf("%f", &amount);

                    if (amount <= acc[i].balance)
                    {
                        acc[i].balance -= amount;
                        printf("Withdrawal Successful.\n");
                    }
                    else
                    {
                        printf("Insufficient Balance.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found.\n");
            break;

        case 5:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (acc[i].accNo == accNo)
                {
                    printf("\nAccount Found\n");
                    printf("Account No : %d\n", acc[i].accNo);
                    printf("Name       : %s\n", acc[i].name);
                    printf("Balance    : %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Account Not Found.\n");
            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice.\n");
        }
    }

    return 0;
}