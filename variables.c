#include <stdio.h>

int main()
{
    printf("Enter your number\n");
    //This is declarartion of int variable
    /*
    This is multi-line comment 
    int data type can store values from -32768 to 32767
    it cannot have decimal numbers or sign
    negative numbers declare as -5
    the number which dont have any sign is positive number 
    */
   /*
   How to declare variables 
   <datatype> <variable name>;
   eg
   int num; 
   float num2;
   we cannot have spaces in between variable name 
   variable name must start with either number or underscore_, other char not allowed 
   digits are allowed in variable name but not as first char
   */

    int num;
    // stores decimals//
    float num2;
    //stores a single char//
    char character;
    //intialization of the variable 
    num = 5;
    num2 = 5.5;
    character = 'A';

    printf("num=%d\n",num);
    printf("num2=%f\n",num2);
    printf("char=%c\n",character);






}
