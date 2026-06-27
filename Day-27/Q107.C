//Write a program to Create salary management system. 
#include <stdio.h>
#include <string.h>

struct Salary
{
    int id;
    char name[30];
    float basic, bonus, total;
};

int main()
{
    struct Salary s[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n1. Add Employee");
        printf("\n2. Display Records");
        printf("\n3. Search Employee");
        printf("\n4. Update Salary");
        printf("\n5. Delete Record");
        printf("\n6. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &s[n].id);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &s[n].basic);

            printf("Enter Bonus: ");
            scanf("%f", &s[n].bonus);

            s[n].total = s[n].basic + s[n].bonus;

            n++;
        }
        else if (choice == 2)
        {
            for (i = 0; i < n; i++)
            {
                printf("\nEmployee ID: %d", s[i].id);
                printf("\nName: %s", s[i].name);
                printf("\nBasic Salary: %.2f", s[i].basic);
                printf("\nBonus: %.2f", s[i].bonus);
                printf("\nTotal Salary: %.2f\n", s[i].total);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("\nEmployee ID: %d", s[i].id);
                    printf("\nName: %s", s[i].name);
                    printf("\nBasic Salary: %.2f", s[i].basic);
                    printf("\nBonus: %.2f", s[i].bonus);
                    printf("\nTotal Salary: %.2f\n", s[i].total);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found\n");
        }
        else if (choice == 4)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    printf("Enter New Basic Salary: ");
                    scanf("%f", &s[i].basic);

                    printf("Enter New Bonus: ");
                    scanf("%f", &s[i].bonus);

                    s[i].total = s[i].basic + s[i].bonus;

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found\n");
        }
        else if (choice == 5)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee Not Found\n");
        }
        else if (choice == 6)
        {
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}