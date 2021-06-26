//3. Write a program as a Macro will take two arguments. It should return the position 1 or 0.


#include <stdio.h>

#define TOGGLE(X) if(bits[X].bit != 0){bits[X].bit = 0;}else{bits[X].bit = 1;}

#define CLEAR(X) bits[X].bit = 0;

#define SET(X) bits[X].bit = 1

typedef union byte
{
    unsigned short int bit:1;
}byte_t;

byte_t bits[8];

void find_binary(int decimal_number)
{
    static int index = 6;
    if (decimal_number == 0){
        return;
    }
    else{
        find_binary(decimal_number/2);
        bits[index].bit = decimal_number%2;
        index--;
    }
}

void swap_nibble(int index1,int index2)
{
    if(((index1 > 6) || (index2 > 6)) || ((index1 < 0) || (index2 < 0)))
    {
        printf("Invalid index for swapping \n");
        return;
    }
    int temp =  bits[index1].bit;
    bits[index1].bit = bits[index2].bit;
    bits[index2].bit = temp;
}

int main()
{
    char ch = 'G';
    printf("ASCII value of char is %d\n",ch);
    find_binary(ch);
    printf("Bits are : (MSB)  ");
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }
    printf("(LSB)\n");
    
    CLEAR(0);
    printf("After clearing Bit are : (MSB)  ");
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }
    printf("(LSB)\n");
    
    SET(7);
    printf("After setting Bit are : (MSB)  ");
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }
    printf("(LSB)\n");
    
    TOGGLE(7);
    printf("After toggling Bit are : (MSB)  ");
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }
    printf("(LSB)\n");
    return 0;
}

/*
OUTPUT : 
Bits are : (MSB)  0 1 0 0 0 1 1 1 (LSB)
After clearing Bit are : (MSB)  0 1 0 0 0 1 1 0 (LSB)
After setting Bit are : (MSB)  1 1 0 0 0 1 1 0 (LSB)
After toggling Bit are : (MSB)  0 1 0 0 0 1 1 0 (LSB)
*/
