#include <stdio.h>

void find_parity(int number)
{
    int mask = 0b1;
    number = number & mask;
    if((number & 1) ){
        printf("Number is even\n");   
    }
    else{
        printf("Number is odd\n");
    }
}

int main()
{
    int a = 10;
    find_parity(a);
    a = 15;
    find_parity(a);
    return 0;
}

/*
OUTPUT : 
Number is odd
Number is even
*/
