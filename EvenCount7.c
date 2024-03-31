#include <stdio.h>
int main(){
    /*
    This program is for printing first 7 even numbers
    */
    int count=1;
    for(int i=2;count<=7;i=i+2, count++){
        printf("%d\n",i);
    }
    
    return 0;
}