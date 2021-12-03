#include<stdio.h>
#include<conio.h>
void main()
{
    int a,x;
    //printf("Enter Number");
    //scanf("%d",&a);
    for(x=1;x<=100;x++)
    {
        if(x%10==0)
        {
            printf("%d\n",x);
        }
    }
    getch();
}