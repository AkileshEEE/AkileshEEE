#include <stdio.h>
void main() 
{
    int n, i, choice, loc, num;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    while (1) 
    {
        printf("\n1. Insert a number\n2. Delete a number\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the location to insert: ");
                scanf("%d", &loc);

                if (loc < 1 || loc > n + 1) 
                {
                    printf("Invalid location\n");
                } 
                else 
                {
                    printf("Enter the number to insert: ");
                    scanf("%d", &num);

                    for (i = n - 1; i >= loc - 1; i--) 
                    {
                        arr[i + 1] = arr[i];
                    }
                    arr[loc - 1] = num;
                    n++;

                    printf("%d inserted at location %d\n", num, loc);
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) 
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter the location to delete: ");
                scanf("%d", &loc);

                if (loc < 1 || loc > n) 
                {
                    printf("Invalid location\n");
                } 
                else 
                {
                    printf("%d deleted from location %d\n", arr[loc - 1], loc);
                    for (i = loc - 1; i < n - 1; i++) 
                    {
                        arr[i] = arr[i + 1];
                    }
                    n--;

                    printf("Array elements: ");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Exiting...\n");

            default:
                printf("Invalid choice\n");
        }
    }
}






