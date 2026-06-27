//Write a program to Create student record management system.
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[30];
    int marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1)
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%d", &s[n].marks);

            n++;
        }
        else if (choice == 2)
        {
            for (i = 0; i < n; i++)
            {
                printf("\nRoll No: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %d\n", s[i].marks);
            }
        }
        else if (choice == 3)
        {
            printf("Enter Roll No: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nRoll No: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %d\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found\n");
        }
        else if (choice == 4)
        {
            printf("Enter Roll No: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Enter New Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter New Marks: ");
                    scanf("%d", &s[i].marks);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Student Not Found\n");
        }
        else if (choice == 5)
        {
            printf("Enter Roll No: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
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
                printf("Student Not Found\n");
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
