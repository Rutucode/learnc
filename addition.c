#include <stdio.h>

int main()
{
    printf("Enter your first number\n");

    int num1, num2, sum;

    scanf("%d",&num1); 

    printf("Enter the value of second numer\n");

    scanf("%d",&num2);

    sum = num1+num2;
    printf("\n %d + %d = %d", num1, num2, sum);


    return 0;
}
