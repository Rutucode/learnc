#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter a first number\n");
    scanf("%d",&num1);
    printf("Enter a second number\n");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("%d is greater than %d",num1, num2);
    }
    else{
         printf("%d is greater than %d",num2, num1);
    }


    return 0;
}