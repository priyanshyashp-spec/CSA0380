#include <stdio.h>

#define SIZE 10

int main()
{
    int hashTable[SIZE];
    int n, key, i, index;

    for(i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &key);

        index = key % SIZE;

        while(hashTable[index] != -1)
        {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = key;
    }

    printf("\nHash Table:\n");
    for(i = 0; i < SIZE; i++)
    {
        if(hashTable[i] != -1)
            printf("%d --> %d\n", i, hashTable[i]);
        else
            printf("%d --> NULL\n", i);
    }

    return 0;
}