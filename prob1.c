#include <stdio.h>

int main()
{
    int n, digit;
    scanf("%d", &n);
    if (n < 9)
        digit = 1;
    else
    {
        if (n > 9 && n <= 99)
            digit = 2;

        else
        {
            digit = 3;
        }
    }
    printf("the digit:%d\n", digit);
}