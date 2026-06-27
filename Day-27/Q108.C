//Write a program to Create marksheet generation system. 
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[30];
    int m1, m2, m3;
    int total;
    float per;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1)
    {
        printf("\n1. Add Student");
        printf("\n2. Display Marksheet");
        printf("\n3. Search Student");
        printf("\n4. Update Marks");
        printf("\n5. Delete Record");
        printf("\n6. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks of Subject 1: ");
            scanf("%d", &s[n].m1);

            printf("Enter Marks of Subject 2: ");
            scanf("%d", &s[n].m2);

            printf("Enter Marks of Subject 3: ");
            scanf("%d", &s[n].m3);

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
            s[n].per = s[n].total / 3.0;

            n++;
        }
        else if (choice == 2)
        {
            for (i = 0; i < n; i++)
            {
                printf("\nRoll No: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nSubject 1: %d", s[i].m1);
                printf("\nSubject 2: %d", s[i].m2);
                printf("\nSubject 3: %d", s[i].m3);
                printf("\nTotal: %d", s[i].total);
                printf("\nPercentage: %.2f\n", s[i].per);
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
                    printf("\nSubject 1: %d", s[i].m1);
                    printf("\nSubject 2: %d", s[i].m2);
                    printf("\nSubject 3: %d", s[i].m3);
                    printf("\nTotal: %d", s[i].total);
                    printf("\nPercentage: %.2f\n", s[i].per);
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
                    printf("Enter New Marks of Subject 1: ");
                    scanf("%d", &s[i].m1);

                    printf("Enter New Marks of Subject 2: ");
                    scanf("%d", &s[i].m2);

                    printf("Enter New Marks of Subject 3: ");
                    scanf("%d", &s[i].m3);

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
                    s[i].per = s[i].total / 3.0;

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