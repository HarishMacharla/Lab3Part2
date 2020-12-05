#include <stdio.h>

int main()
{
    int i, j;
    printf("enter i,j:");
    scanf("%d", &i);
    scanf("%d", &j);

    // if (i>j)
    //printf("%d", i);
    //  else
    //     printf("%d\n",j);

    printf("%d\n", i > j ? i : j);
}