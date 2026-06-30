//#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, choice, search, found = 0;
    int id[50];
    char book[50][50];
    char author[50][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    do
    {
        printf("\n--- MINI LIBRARY SYSTEM ---");
        printf("\n1. Display Books");
        printf("\n2. Search Book by ID");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook ID\tBook Name\tAuthor\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%s\n", id[i], book[i], author[i]);
                }
                break;

            case 2:
                found = 0;
                printf("Enter Book ID to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nBook Found");
                        printf("\nBook ID: %d", id[i]);
                        printf("\nBook Name: %s", book[i]);
                        printf("\nAuthor: %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
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