#include <stdio.h>
int main()
{
    int numerical_grade ,letter_grade;

    printf("enter numerical grade:");
    scanf("%d",&numerical_grade);

    letter_grade = numerical_grade/10;

    switch(letter_grade){

        case 9:case 10:printf("letter grade:A\n");
            break;
        case 8: printf("letter grade:B\n");
            break;
        case 7: printf("letter grade:C\n");
            break;
        case 6: printf("letter grade:D\n");
            break;
        case 5:case 4:case 3:case 2:case 1:case 0: printf("letter grade:F\n");
            break;
        default: printf("enter correct numerical grade\n");
            break;
    }
return 0;
}