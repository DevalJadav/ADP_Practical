#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=20;
    a=10;
    a++; //a=a+1;
    b=b + ++a;
    printf("a=%d b=%d",a,b);
    getch();
}