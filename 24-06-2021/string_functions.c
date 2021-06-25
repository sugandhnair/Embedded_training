/*.Implemention of c program for string length, 
string copy and 
string comparison.(without using inbuilt function)
Please refer the below link for Que no 2.*/

#include <stdio.h>

int string_length(char *str){
    return (sizeof(str)/sizeof(char));
}

//returns 0 if the strings are equal otherwise returns 1
int string_compare(char *str1,char *str2)
{
    int len = sizeof(str1)/sizeof(char);
    if(len != sizeof(str2)/sizeof(char)){
        return 1;
    }
    for(int i=0;i<len;i++){
        if(str1[i] == str2[i]){
            return 1;
        }
    }
    return 0;
}

void string_copy(char *str1,char *str2)
{
    int len = sizeof(str1)/sizeof(char);
    for(int i=0;i<len;i++){
        str2[i] = str1[i];
    }
}

int main()
{
    char *str1 = "Sugandh";
    char *str2 = malloc(sizeof(str1));;
    int length = string_length(str1);
    printf("Length of string is %d\n",length);
    string_copy(str1,str2);
    printf("String is : %s\n",str1);
    printf("Copied string is : %s\n",str2);
    char *str3 = "Suganh";
    if(string_compare(str1,str3) == 0)
    {
        printf("String matched\n");
    }
    else
    {
        printf("Strings do not match\n");
    }
    return 0;
}
