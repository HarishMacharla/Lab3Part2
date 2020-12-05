//WRITE A PROGRAM THAT CALCULATES HOW AMNY DIGITS A NUMBER CONTAIN

#include <stdio.h>

int main()
{
    int num, digit, count = 0;
    printf("enter number:");
    scanf("%d", &num);
    while (num != 0)
    {    
        num = num / 10;
        ++count ;   
    }
    printf("the number contain:%d\n", count);
    return 0;
}