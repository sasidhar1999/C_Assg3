/* 4. Write a program to check whether a given number is an even number or an odd 
number without using % operator */

#include<stdio.h>
int main()
{
    int num,lsb;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num & 1)
    {
        printf("%d is odd",num);
    }
    else
    {
        printf("%d is even",num);
    }
    return 0;
}