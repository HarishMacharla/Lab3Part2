//write a program to convert 24 hour clock to 12 hour clock

#include <stdio.h>

int main()
{
    int hours, minutes, x, y, hour;

    printf("enter 24 hour format\n");
    printf("enter hours:");
    scanf("%d", &hours);

    printf("enter minutes:");
    scanf("%d", &minutes);

    printf("24 hour format:%d%c%d\n", hours, ':', minutes);

    if (hours == 1)
        hour = 1;
    else if (hours == 2)
        hour = 2;
    else if (hours == 3)
        hour = 3;
    else if (hours == 4)
        hour = 4;
    else if (hours == 5)
        hour = 5;
    else if (hours == 6)
        hour = 6;
    else if (hours == 7)
        hour = 7;
    else if (hours == 8)
        hour = 8;
    else if (hours == 9)
        hour = 9;
    else if (hours == 10)
        hour = 10;
    else if (hours == 11)
        hour = 11;
    else if (hours == 12)
        hour = 12;
    else if (hours == 13)
        hour = 1;
    else if (hours == 14)
        hour = 2;
    else if (hours == 15)
        hour = 3;
    else if (hours == 16)
        hour = 4;
    else if (hours == 17)
        hour = 5;
    else if (hours == 18)
        hour = 6;
    else if (hours == 19)
        hour = 7;
    else if (hours == 20)
        hour = 8;
    else if (hours == 21)
        hour = 9;
    else if (hours == 22)
        hour = 10;
    else if (hours == 23)
        hour = 11;
    else if (hours == 24)
        hour == 12;
    else
    {
        printf("enter correct time");
    }
    

    if (hours > 13 && hours < 24)
        printf("Equivalent 12 hour format:%d%c%d PM\n", hour, ':', minutes);
    else
    {
        printf("Equivalent 12 hour format:%d%c%d AM\n", hour, ':', minutes);
    }
    

    return 0;
}