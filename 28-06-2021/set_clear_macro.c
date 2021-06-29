#include <stdio.h>

#define SET_BITS(X,Y) (X = X | (1<<Y))

#define CLEAR_BITS(X,Y) (X = X ^ (1<<Y))

int main()
{
    int number=0;
    printf("Setting bits\n");
    for(int i=0;i<4;i++){
    SET_BITS(number,i);
    printf("Updated number is : %d\n",number);}
    
    printf("Clearing bits\n");
    for(int i=0;i<4;i++){
    CLEAR_BITS(number,i);
    printf("Updated number is : %d\n",number);}
    return 0;
}

/*
OUTPUT : 
Setting bits
Updated number is : 1
Updated number is : 3
Updated number is : 7
Updated number is : 15
Clearing bits
Updated number is : 14
Updated number is : 12
Updated number is : 8
Updated number is : 0
*/
