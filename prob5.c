#include <stdio.h>

int main()
{
    float income,tax_due;
    printf("enter the amount of taxable income:$");
    scanf("%f",&income);

    if(income<750)
        tax_due = (0.01)*income;
    else if(income<2,250)
        tax_due = 7.50+(income-750)*0.02;
    else if(income<3,750)
        tax_due = 37.50+(income-2,250)*0.03;
    else if(income<5,250)
        tax_due = 82.50+(income-3,750)*0.04;
    else if(income<7,000)
        tax_due = 142.50+(income-5,250)*0.05;
    else 
        tax_due = 230.00+(income-7000)*0.06;
    
    printf("tax due:$ %.2f\n",tax_due);

    return 0;
    
    
    
    
    
    
    
    
    
}