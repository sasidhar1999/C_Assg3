/* 18. Write a program which takes the month number as an input and display number of 
days in that month. */

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x>=1 && x<=12)
    {
        if(x==1 && x==3 && x==5 && x==7 && x==8 && x==10 && x==12)
            printf("No of days in month number %d is 31",x);
        else if(x==2)
            printf("No of days in month number %d is 28",x);
        else
            printf("No of days in month number %d is 30",x);    
    }
    else
        printf("%d is not a month number",x);
    return 0;
}