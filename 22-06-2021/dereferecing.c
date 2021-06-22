#include <stdio.h>

int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33},
    };
    
    for(int i=0;i<3;i++){
        printf("Address of %dth array = %u %u \n",i,arr[i],*(arr+i));
        for(int j=0;j<4;j++){
            printf("\n%d ",arr[i][j]);
            printf("%d ",*(*(arr+i)+j));
            printf("%d ",(*(arr+i)+j));
        }
        printf("\n");
    }
    return 0;
}

/*
OUTPUT : 
Address of 0th array = 1869133840 1869133840 

10 10 1869133840 
11 11 1869133844 
12 12 1869133848 
13 13 1869133852 
Address of 1th array = 1869133856 1869133856 

20 20 1869133856 
21 21 1869133860 
22 22 1869133864 
23 23 1869133868 
Address of 2th array = 1869133872 1869133872 

30 30 1869133872 
31 31 1869133876 
32 32 1869133880 
33 33 1869133884

*/
