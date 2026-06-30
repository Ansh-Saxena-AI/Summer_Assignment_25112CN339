//Write a program to Develop complete mini project using arrays, strings and functions. 
#include <stdio.h>
#include <string.h>

int id[50], qty[50], n;
char name[50][50];
float price[50];

void addProducts()
{
    int i;
    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nProduct %d\n", i + 1);

        printf("Enter Product ID: ");
        scanf("%d", &id[i]);

        printf("Enter Product Name: ");
        scanf("%s", name[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);

        printf("Enter Quantity: ");
        scanf("%d", &qty[i]);
    }
}

void displayProducts()
{
    int i;

    printf("\nID\tName\tPrice\tQuantity\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%d\n", id[i], name[i], price[i], qty[i]);
    }
}

void searchProduct()
{
    int i, search, found = 0;

    printf("Enter Product ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("\nProduct Found\n");
            printf("ID: %d\n", id[i]);
            printf("Name: %s\n", name[i]);
            printf("Price: %.2f\n", price[i]);
            printf("Quantity: %d\n", qty[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Product not found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n----- MINI INVENTORY PROJECT -----");
        printf("\n1. Add Products");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProducts();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 4);

    return 0;
}