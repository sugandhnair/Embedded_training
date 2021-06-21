#include <stdio.h>

void sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
       if(arr[i] > arr[i+1]){
           printf("The array is not sorted \n");
           return;
       }
   }
   printf("The array is sorted \n");
}
void main()
{
   int n;
   printf("Enter number of array elements : ");
   scanf("%d",&n);
   
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   sorted(arr,n);
}
