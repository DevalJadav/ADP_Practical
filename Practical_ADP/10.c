#include<stdio.h>
#include<conio.h>
void main()
{
    int a,x;
    printf("Enter Number");
    scanf("%d",&a);
    for(x=1;x<=10;x++)
    {
        printf("%d*%d=%d\n",a,x,a*x);
    }
    getch();
}