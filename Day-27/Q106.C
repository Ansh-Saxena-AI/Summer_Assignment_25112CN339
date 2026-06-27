//Write a program to Create employee management system.
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Name: ");
            scanf("%s", e[n].name);

            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);

            n++;
        }
        else if (choice == 2)
        {
            for (i = 0; i < n; i++)
            {
                printf("\nEmployee ID: %d", e[i].id);
                printf("\nName: %s", e[i].name);
                printf("\nSalary: %.2f\n", e[i].salary);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Employee ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (e[i].id == id)
                {
                    printf("\nEmployee ID: %d", e[i].id);
                    printf("\nName: %s", e[i].name);
                    printf("\nSalary: %.2f\n", e[i].salary);
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
                if (e[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf("%s", e[i].name);

                    printf("Enter New Salary: ");
                    scanf("%f", &e[i].salary);

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
                if (e[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
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