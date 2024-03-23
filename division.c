#include <stdio.h>

int main()
{ 
    //Float variable use for storing decimal numbers//
    float dividend,divisor, ans;

    printf("Enter value of dividend \n");

    scanf("%f", &dividend);

    printf( "Enter value of divisor \n");

    scanf("%f", &divisor);

    ans= dividend / divisor;

    printf("\n %f / %f = %f", dividend, divisor, ans );

    return 0;







}