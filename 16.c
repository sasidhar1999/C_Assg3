/* 16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character. */

#include<stdio.h>
int main()
{
    char c;
    printf(" Enter character : ");
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase letter",c);
    }
    else if(c >= 'A' && c <= 'Z')
    {
        printf("%c is a Uppercase letter",c);
    }
    else if(c >= '0' && c <= '9')
    {
        printf("%c is a digit",c);
    }
    else
    {
        printf("%c is a special character",c);
    }
    return 0;
}