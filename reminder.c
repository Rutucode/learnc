#include <stdio.h>
int main()
{
    
 int dividend, divisor, reminder;

  printf("Enter value of dividend \n");

    scanf("%d", &dividend);

    printf( "Enter value of divisor \n");

    scanf("%d", & divisor);

    //% operator is called as modular operator, gives us a reminder//

    reminder = dividend % divisor;

    printf("\n %d / %d reminder is  %d", dividend, divisor, reminder );
return 0;

}
