#include <stdio.h>

int find_set_bits(int number)
{
    int count=0;
    for(int i=0;i<(sizeof(int)*4);i++){
        int mask = 1 << (i);
        mask = number & mask;
        if(mask > 0){
            count++;
        }
    }
    return count;
}

int main()
{
    int a = 15;
    printf("Number of bits set : %d \n",find_set_bits(a));
    a = 21;
    printf("Number of bits set : %d \n",find_set_bits(a));
    return 0;
}

/*
OUTPUT : 
Number of bits set : 4 
Number of bits set : 3
*/
