//Write a program to Create library management system. 
#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", book[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", book[n].author);

            n++;
            printf("Book Added Successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Books Available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID : %d\n", book[i].id);
                    printf("Name : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    printf("\nBook Found\n");
                    printf("ID : %d\n", book[i].id);
                    printf("Name : %s\n", book[i].name);
                    printf("Author : %s\n", book[i].author);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found.\n");
            break;

        case 4:
            printf("Enter Book ID to Delete: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        book[j] = book[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Book Deleted Successfully.\n");
                    break;
                }
            }

            if (found == 0)
                printf("Book Not Found.\n");
            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice.\n");
        }
    }

    return 0;
}