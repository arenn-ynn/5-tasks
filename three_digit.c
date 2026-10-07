#include <stdio.h>

int main()
{
    int inp;
    printf("enter your 3 digit number!\n");
    scanf("%d", &inp);

    if (inp >= 100 && inp <= 999)
    {
        int result = 0;

        int first_digit = inp / 100;
        int second_digit = (inp / 10) % 10;
        int third_digit = inp % 10;

        result = first_digit + second_digit + third_digit;

        printf("%d\n", result);
    }
    else
    {
        printf("the number should contain 3 digits\n");
    }
}
