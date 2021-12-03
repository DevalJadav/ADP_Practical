#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("Enter your Number");
    scanf("%d",&no);
    if(no<100)
    {
        if(no%7==0)
        {
            printf("\nYour No %d is greater than 100 and its divisible by 7",no);
        }
        else
        {
            printf("\nYour No %d is less 100 but not divisible by 7");
        }
    }
    else
    {
        printf("\nYour No %d is greater than 100",no);
    }
}