#include <stdio.h>
int main()
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11,i12, check_digit, sum_1, sum_2, total;;
    printf("enter UPC:");

    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11,&i12);

    sum_1 = i1 + i3 + i5 + i7 + i9 + i11;
    sum_2 = i2 + i4 + i6 + i8 + i10;

    total =((sum_1 * 3) + sum_2) - 1;;

    check_digit = 9 - (total%10) ;

    if (i12 == check_digit )
        printf("VALID\n");
    else
    {
        printf("NOT VALID\n");
    }
    
    return 0;

}