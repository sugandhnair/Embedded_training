#include <stdio.h>

void swap(int index1,int index2,int arr[])
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int second_largest(int arr[],int n)
{
    //sort the array in ascending order using bubble sort method
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                swap(i,j,arr);
            }
        }
    }
    //return the second last element from the sorted array
    return arr[n-2];
}

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter %d array elements : \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = second_largest(arr,n);
    printf("Second largest element in the array is : %d\n",result);
    return 0;
}
