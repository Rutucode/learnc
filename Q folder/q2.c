 /*#include <stdio.h>
int main(){
    int intValue;
    char character;
    float floatValue;
    double doubleValue;

    printf("Enter integer value\n");
    scanf("%d\n", &intValue);

        printf("Enter character value\n");
    scanf("%c\n", &caracter);
    
     printf("Enter float value\n");
    scanf("%f\n", &floatvalue);

      printf("Enter double value\n");
    scanf("%lf\n", &doublevalue);
   

     printf("Enter character Integer Value ="%d", intValue");
   
    printf(\nEntered double)
}
*/
#include <stdio.h>

int main(){
    int intValue;
    char character;

    float floatValue;
    double doubleValue;

    printf("Enter integer value\n");
    scanf("%d", &intValue);

     printf("\nEnter character value\n");
    scanf(" %c", &character);

     printf("\nEnter float value\n");
    scanf("%f", &floatValue);

     printf("\nEnter double value\n");
    scanf("%lf", &doubleValue);

    printf("\nEntered Integer Value = %d",intValue);
    printf("\nEntered charcter Value = %c",character);
     printf("\nEntered float Value = %f",floatValue);
    printf("\nEntered double Value = %lf",doubleValue);


}