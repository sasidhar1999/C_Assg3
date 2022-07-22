/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed. */

#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    printf("Enter 5 subject marks out of 100 : ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    if((s1>=33)&&(s2>=33)&&(s3>=33)&&(s4>=33)&&(s5>=33))
    {
        printf("Candidate has passed the examination");
    }
    else
    {
        printf("Candidate has failed the examination");
    }
    return 0;
}