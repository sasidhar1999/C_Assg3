// 6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("%d is greater than %d",n1,n2);
    }
    else if(n1 == n2)
    {
        printf("Both the numbers are same and the number is %d",n1);
    }
    else
    {
        printf("%d is greater than %d",n2,n1);
    }
    return 0;
}