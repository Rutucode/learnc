#include <stdio.h>

int main()
{
    int num1, num2, ans;
    
    printf("Enter value of first number \n ");

    scanf("%d",&num1);

    printf("Enter value of second number \n ");

    scanf("%d",&num2);

    ans = num1 * num2;
    
    printf("\n%d x %d = %d", num1, num2, ans );

    return 0;
 


}