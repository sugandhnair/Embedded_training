#include <stdio.h>

void sub_sum(int arr[],int n)
{
    int sum = 0,temp_sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp_sum += arr[j]; 
        }
        if(temp_sum > sum){
            sum = temp_sum;
        }
        temp_sum = 0;
   }
   printf("Maximun sum is : %d\n",sum);
}
void main()
{
   int arr[5] = {1,-2,3,1,2};
   sub_sum(arr,5);
}
