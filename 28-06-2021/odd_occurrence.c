#include <stdio.h>

int odd_occ(int array[],int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
       count = count ^ array[i];
    return count;
}
int main()
{
    int array[] = {2,2,5,5,1,6,1,7,8,7,8,9,4,4,9};
    printf("The number %d has an odd occurence.\n",odd_occ(array,sizeof(array)/sizeof(int)));
    return 0;
}

/*
OUTPUT : 
The number 6 has an odd occurence.
*/
