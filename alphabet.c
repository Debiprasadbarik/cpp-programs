#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet:\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("%c is a upper case letter.\n");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("%c is a lower case letter.\n");
    }
}