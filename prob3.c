#include <stdio.h>
int main()
{
    float value,commision,shares,price,rival_commission;
    printf("enter the number of shares:");
    scanf("%f",&shares);
    printf("enter price per share:");
    scanf("%f",&price);

    value = shares*price;
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

    printf("the original commision is :$%.2f\n",commision);    

    if (shares<2000.00)
        rival_commission= 33.00+(0.03*shares);
    else
    {
        rival_commission= 33.00+(0.02*shares);
    }
    
    printf("rival's broker commission:%.2f\n",rival_commission);

    return 0;

    
}