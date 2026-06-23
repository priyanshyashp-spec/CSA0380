#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push()
{
    int value;

    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    stack[++top] = value;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Deleted Element: %d\n", stack[top--]);
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Top Element: %d\n", stack[top]);
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Stack Elements:\n");

    for(i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    int choice;

    do
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}