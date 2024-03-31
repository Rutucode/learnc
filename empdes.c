#include <stdio.h>
int main()
{
    int salary;

    printf("Type salary of employee");

    scanf("%d",&salary);

    if(salary>=1000 && salary<=10000)
    {
        printf("Employee is helper\n");
    }
    else if(salary>=11000 && salary<=30000)
    {
      printf("Employee is Accountant")     ; 

    }

     else if(salary>=31000 && salary<=60000)
    {
      printf("Employee is software Engineer\n");    

    }

     else if(salary>=61000 && salary<=100000)
    {
      printf("Employee is TL\n") ;     

    }
     else if(salary> 100000)
    {
      printf("Employee is VP") ;     

    }

    return 0;
}