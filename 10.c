/* 10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>
int main()
{
    float cp,sp,p;
    printf("Enter cp and sp : ");
    scanf("%f%f",&cp,&sp);
    p = ((sp-cp)/cp)*100;
    if((sp-cp)>0)
    {
        printf("Profit percentage is %f",p);
    }
    else
    {
        printf("loss percentage is %f",p);
    }
    return 0;
}