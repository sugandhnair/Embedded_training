#include <stdio.h>

void find(int decimal_number)
{
    if (decimal_number == 0){
        return;
    }
    else{
        find(decimal_number/2);
        printf("%d\n",decimal_number%2);
    }
}
 
int main()
{
    int decimal_number;
    printf("Enter the decimal number : ");
    scanf("%d",&decimal_number);
    find(decimal_number);
    return 0;
}

