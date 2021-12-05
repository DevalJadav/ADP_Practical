#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\nEnter your two numbers a and b");
    scanf("%d %d",&a,&b);
  //printf("\nEnter 2nd number");
  //scanf("%d",&b);
    c=a+b;
    printf("A=%d \t B=%d \t C=%d",a,b,c);
    getch();
}