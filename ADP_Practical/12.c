#include<stdio.h>
#include<conio.h>
void main()
{
    int a,x,flg=1;
    printf("Enter Number");
    scanf("%d",&a);
    for(x=2;x<=a-1;x++)
    {
        if(a%x==0)
        {
            printf("Number is not prime");
            flg=0;
            break;
        }
    }
    if(flg==1)
    {
        printf("%d is prime",a);
    }
    getch();
}