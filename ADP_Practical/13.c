#include <stdio.h>
#include <conio.h>
void main()
{
    int a,x,flg=1;
    // printf("Enter Number");
    // scanf("%d",&a);
    for (a=11;a<=20;a++)
    {
        flg=1;
        for (x=2;x<=a-1;x++)
        {
            if (a%x==0)
            {
                printf("\n%d is not prime",a);
                flg=0;
                break;
            }
        }
        if (flg==1)
        {
            printf("\n%d is prime", a);
        }
        getch();
    }
}