/* 9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times. */

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("%d",n1>n2 ? n1>n3?n1:n3 : n2>n3?n2:n3);
    return 0;
}
