#include <stdio.h>

int find(int decimal_number)
{
    if (decimal_number == 0){
        return 0;
    }
    else{
        return (decimal_number % 2 + 10 * find(decimal_number / 2));
    }
}
 
int main()
{
    int decimal_number;
    printf("Enter the decimal number : ");
    scanf("%d",&decimal_number);
    printf("%d", find(decimal_number));
    return 0;
}
