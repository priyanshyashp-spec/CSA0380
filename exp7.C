#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1.Insert\n2.Delete\n3.Display\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter position and element: ");
            scanf("%d%d", &pos, &element);

            for(i = n; i >= pos; i--)
                arr[i] = arr[i - 1];

            arr[pos - 1] = element;
            n++;

            printf("Array after insertion:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            for(i = pos - 1; i < n - 1; i++)
                arr[i] = arr[i + 1];

            n--;

            printf("Array after deletion:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 3:
            printf("Array elements:\n");
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}