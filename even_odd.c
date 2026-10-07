#include <stdio.h>

void is_even(int value)
{
    if (value % 2 == 0)
    {
        printf("is even\n");
    } 
    else
    {
        printf("is odd\n");
    }
}

int main() 
{
    int a;
    printf("Enter a number!\n");
    scanf("%d", &a);

    is_even(a);

    return 0;
}