// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int num,count=0,n;
    printf("Enter a number : ");
    scanf("%d",&num);
    n=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }

    if(count == 3)
    {
        printf("%d is 3 digit number",n);
    }
    else
    {
        printf("%d is not a 3 digit number",n);
    }
    return 0;
}