// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is zero",num);
    }
    return 0;
}