#include <stdio.h>

int main()
{
    int a1,a2,a3,a4,max1,min1,max2,min2,max,min;
    printf("enter four integers:");
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);

    if (a1<a2)
    {   max1=a2;
        min1=a1;
    }
    else{   
        max1=a1;
        min1=a2;
    }
    if(a3<a4)
    {  max2=a4;
        min2=a3;
    }
    else{
        max2=a3;
        min2=a4;
    }
    if(min1<min2)
        min=min1;
    else
    {
        min=min2;
    }
    if(max1<max2)
        max=max2;
    else
    {
        max=max1;
    }
    
        
        
            
    printf("the max=%d\n",max);
    printf("the min=%d\n",min);

    
    return 0;

    
            
       
        
    
        
            
    
    
                
            
            
    
}