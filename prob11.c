#include <stdio.h>
int main()
{
    int number,x,y;
    printf("enter two digit number:");
    scanf("%d",&number);
    if (number<10 || number >99){
        printf("$$enter two digit number only$$\n");
        
    }


    if (number>=11 && number<=19){
        switch(number)
        {
            case 11:printf("you entered number : eleven\n");
                break;
            case 12:printf("you entered number : twelve\n");
                break;
            case 13:printf("you entered number : thirteen\n");
                break;
            case 14:printf("you entered number : fourteen\n");
                break;
            case 15:printf("you entered number : fifteen\n");
                break;
            case 16:printf("you entered number : sixteen\n");
                break;
            case 17:printf("you entered number : seventeen\n");
                break;
            case 18:printf("you entered number : eighteen\n");
                break;
            case 19:printf("you entered number : nineteen\n");
                break;
           default:printf("%%");
                break;
            
        }
    }
    else
    {
        x=(number)/10;
    
        switch(x)
        {
            case 1:printf("you entered number : ten\n");
                break;
            case 2:printf("you entered number : twenty");
                break;
            case 3:printf("you entered number : thirty");
                break;
            case 4:printf("you entered number : forty");
                break;
            case 5:printf("you entered number : fifty");
                break;
            case 6:printf("you entered number : sixty");
                break;
            case 7:printf("you entered number : seventy");
                break;
            case 8:printf("you entered number : eighty");
                break;
            case 9:printf("you entered number : ninety");
                break;
        }

        y=(number)%10;
    
        switch(y)
        {
            case 1:printf("-one\n");
                break;
            case 2:printf("-two\n");
                break;
            case 3:printf("-three\n");
                break;
            case 4:printf("-four\n");
                break;
            case 5:printf("-five\n");
                break;
            case 6:printf("-six\n");
                break;
            case 7:printf("-seven\n");
                break;
            case 8:printf("-eight\n");
                break;
            case 9:printf("-nine\n");
                break;
        }
    }   
return 0;  
}