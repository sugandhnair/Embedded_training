//Write a C program to find if a number is power of 2 or not

#include <stdio.h>

int power(int n)
{
    printf("Number is %d\n",n);
    if(n==1){
        return 0;
    }
    if(n%2!=0){
        return 1;
    }
    power(n/2);
}

int main()
{
    int number = 16;
    if(power(number) == 0){
        printf("Number is a power of 2\n");
    }
    else{
        printf("Number is not a power of 2\n");
    }
    return 0;
}

/*
OUTPUT : 
Number is 16
Number is 8
Number is 4
Number is 2
Number is 1
Number is a power of 2
*/
