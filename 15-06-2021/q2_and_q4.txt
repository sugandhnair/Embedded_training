2.Execute the line and find the output a = 2, b =1, x=(a++ && (!b) && b|| ++a);
Ans : This will output the value of x as 1.

4.Execute the code in screenshot. Give the output,
int main()
{
    int x =10,y=3;
    {
        int x = 100 , z =10;
        printf("%d %d\n",x,z);
    }
    printf("%d %d\n",x,z);
}
Ans : This will result in a error since in the scope of the second print statement the variable 'z' is undeclared.
