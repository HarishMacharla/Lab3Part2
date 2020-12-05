#include <stdio.h>

int main()
{
    int day1,month1,year1,day2,month2,year2;
    printf("enter first date (mm/dd/year):");
    scanf("%d/%d/%d",&month1,&day1,&year1);
    printf("enter second date (mm/dd/year):");
    scanf("%d/%d/%d",&month2,&day2,&year2);

    if (year1>year2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);

    else
    {
        printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
    }
    
    return 0;
        
}