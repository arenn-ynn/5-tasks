#include <stdio.h>

void check(int val)
{
    if (((val % 3) == 0) && ((val % 5) == 0))
    {
        printf("yes!\n");
    } 
    else
    {
        printf("no((\n");
    }
}

int main() 
{
    int a;
    printf("give me a number!\n");
    scanf("%d", &a);

    check(a);

    return 0;
}