#include <stdio.h>

void main()
{
    int size;
   printf("Enter the size of the 2D matrix : ");
    scanf("%d",&size);
    
    int arr1[size][size];
    int arr2[size][size];
    printf("Enter the 1st matrix elements : \n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter the 2nd matrix elements : \n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
   int res[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            res[i][j] = 0;
            for (int k = 0; k < size; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
    }  
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",res[i][j]); 
        }
    }
    
}
