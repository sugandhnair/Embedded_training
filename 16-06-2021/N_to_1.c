#include <stdio.h>

void ascending(int number)
{
    if(number == 0){
        return;
    }
    printf("%d\n",number);
    ascending(number-1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    ascending(n);
    return 0;
}
