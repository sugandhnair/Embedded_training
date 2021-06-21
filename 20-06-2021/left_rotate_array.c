#include <stdio.h>

void swap(int arr[],int index1,int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
void shifted(int arr[],int n,int rotation)
{
    for(int i=0;i<rotation;i++){
        for(int j=0;j<n-1;j++){
            if(j==0){
                swap(arr,0,n-1);
            }
            else{
            swap(arr,j,j-1);
            }
        }
        printf("After rotation %d : ",i);
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
   }
}
void main()
{
   int n;
   printf("Enter the number of rotation : ");
   scanf("%d",&n);
   int arr[5] = {5,4,2,3,1};
   
   shifted(arr,5,n);
}

//1st rotation : 4 2 3 1 5 
//2nd rotation : 2 3 1 5 4 
//3rd rotation : 3 1 5 4 2
//4th rotation : 1 5 4 2 3
//5th rotation : 5 4 2 3 1
