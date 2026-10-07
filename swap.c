#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int number_1;
    int number_2;

    printf("Type two numbers!\n");
    scanf("%d %d", &number_1, &number_2);

    printf("before:\nnumber_1 = %d\nnumber_2 = %d\n", number_1, number_2);
    swap(&number_1, &number_2);
    printf("after:\nnumber_1 = %d\nnumber_2 = %d\n", number_1, number_2);

    return 0;
}