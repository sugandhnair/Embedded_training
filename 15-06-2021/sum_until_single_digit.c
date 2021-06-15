#include <stdio.h>

int sum;
int number;

void sum_of_numbers(void)
{
    sum=0;
    while(number > 0){
    int rem = number % 10;
    number = number / 10;
    sum += rem;
    printf("Number : %d  Sum : %d\n",number,sum);
    }
    if(sum > 9)
    {
        number = sum;
        sum_of_numbers();
    }
    
}
int main(void){
    printf("Enter the number : ");
    scanf("%d",&number);
    sum_of_numbers();
    printf("Final sum is : %d\n",sum);
}
