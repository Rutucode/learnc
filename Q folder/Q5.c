/* #include <stdio.h>
int main (){
int num1, num2, num3;
printf("Enter  first number\n");
scanf("%d", &num1);
printf("Enter second number\n");
scanf("%d", &num2);
printf("Enter third number\n");
scanf("%d", &num3);

if(num1 > num2 && num1 > num3){
    printf("%d is greater than %d and %d", num1, num2, num3);
}
else if (num2 > num1 && num2 >num3){
    printf("%d is greater than %d")
}

return 0;

} */

int main(){
    int num1, num2, num3;
    printf("Enter a first number\n");
    scanf("%d",&num1);
    printf("Enter a second number\n");
    scanf("%d",&num2);
    printf("Enter a third number\n");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is greater than %d and %d", num1, num2, num3);
    }
    else if(num2 > num1 && num2 > num3){
         printf("%d is greater than %d and %d", num2, num1, num3);
    }
    else if(num3 > num1 && num3 > num2){
        printf("%d is greater than %d and %d", num3, num1, num2);
    }
    else{
        printf("%d and %d and %d are equal", num1, num2, num3);
    }

    return 0;
}