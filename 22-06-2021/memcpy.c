#include<stdio.h>

void mem_copy(void *source,void *dest,int size)
{
    char *src = (char *)source;
   char *dst = (char *)dest;
    for (int i=0; i<size; i++){
       dst[i] = src[i];
    }
}

int main()
{
    char ch[] = {'O','n','l','i','n','e','\0'};
    char ch2[7];
    int size = sizeof(ch)/sizeof(char);
    
    mem_copy(ch,ch2,size);
    printf("First array is %s and second array is %s\n",ch,ch2);
    return 0;
}
