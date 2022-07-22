/* 7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots */

#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the coffecients of the quadratic equation : ");
    scanf("%d%d%d",&a,&b,&c);
    n = (b*b)-(4*a*c);
    if(n>0)
    {
        printf("roots are real and distinct");
    }
    else if(n==0)
    {
        printf("Roots are real and equal");
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}