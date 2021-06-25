//Write a program to swap the string by using swapping pointer and also write a program for swaping the data.

void swap_pointers(char **str1,char **str2)
{
    int  *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void swap_data(char *str1,char *str2)
{
    char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    free(temp);
}

int main()
{
    char *str1 = "Sugandh";
    char *str2 = "Nair";
    printf("Before swapping String 1 %s and string 2 : %s\n",str1,str2);
    swap_pointers(&str1,&str2);
    printf("After swapping using pointers String 1 : %s and string 2 : %s\n",str1,str2);
    char str3[] = "Sugandh";
    char str4[] = "Nair";
    swap_data(str3,str4);
    printf("After swapping using data String 1 : %s and string 2 : %s\n",str1,str2);
    return 0;
}

/*
OUTPUT

Before swapping String 1 Sugandh and string 2 : Nair
After swapping using pointers String 1 : Nair and string 2 : Sugandh
After swapping using data String 1 : Nair and string 2 : Sugandh

*/

