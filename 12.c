// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char c;
    printf(" Enter alphabet character : ");
    scanf("%c",&c);
    if(c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase letter",c);
    }
    else if(c >= 'A' && c >= 'Z')
    {
        printf("%c is a Uppercase letter",c);
    }
    else
    {
        printf("%c is a non alphabet",c);
    }
    return 0;
}