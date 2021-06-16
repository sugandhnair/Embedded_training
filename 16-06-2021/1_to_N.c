#include <stdio.h>

void ascending(int number)
{
    if(number == 0){
        return;
    }
    ascending(number-1);
    printf("%d\n",number);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    ascending(n);
    return 0;
}
