//Write a program to Create mini employee management system. 
#include <stdio.h>

int main()
{
    int n, i, choice, search, found = 0;
    int id[50];
    char name[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    do
    {
        printf("\n--- MINI EMPLOYEE MANAGEMENT SYSTEM ---");
        printf("\n1. Display Employees");
        printf("\n2. Search Employee by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nID\tName\tSalary\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
                }
                break;

            case 2:
                found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nEmployee Found");
                        printf("\nID: %d", id[i]);
                        printf("\nName: %s", name[i]);
                        printf("\nSalary: %.2f\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 3:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 3);

    return 0;
}