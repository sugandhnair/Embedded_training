//1. Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields)
//Not the correct way to solve this problem , but this is the only succesfull attempt I had so keeping it for now until I reach the optimal solution.


#include <stdio.h>

typedef union byte
{
    unsigned short int bit:1;
}byte_t;

byte_t bits[8];

void find_binary(int decimal_number)
{
    static int index = 1;
    if (decimal_number == 0){
        return;
    }
    else{
        find_binary(decimal_number/2);
        bits[index].bit = decimal_number%2;
        index++;
    }
}

int main()
{
    char ch = 'b';
    printf("ASCII value of char is %d\n",ch);
    find_binary(ch);
    printf("Bits are : (MSB)  ");
    for(int i=0;i<8;i++){
        printf("%d ",bits[i].bit);
    }
    printf("(LSB)\n");
    return 0;
}

/*
OUTPUT : ASCII value of char is 98
Bits are : (MSB)  0 1 1 0 0 0 1 0 (LSB)
*/
