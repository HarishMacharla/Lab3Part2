#include <stdio.h>
int main()
{
    float commision,value;
    printf("enter the value of trade:$");
    scanf("%f",&value);

    if (value<2500)
        commision=30.00+(0.017*value);
    else if(value<6250)
        commision=56.00+(0.0066*value);
    else if(value<20000)
        commision=76.00+(0.0034*value);
    else if(value<50000)
        commision=100.00+(0.0022*value);
    else if(value<500000)
        commision=155.00+(0.0011*value);
    else
    {
        commision=255.00+(0.0009*value);
    }
    if(commision<39.00)
        commision=39.00;

    printf("the commision is :$%.2f\n",commision);    

    
}
