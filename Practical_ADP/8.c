#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ans,ch;
    up:
    printf("Press 1 for addition \nPress 2 for sub \nPress 3 for Mult\nPress 4 For Div\nPress 5 for exit\nEnter Your selection");
    scanf("%d",&ch);
    printf("\nEnter Two Number");
    scanf("%d %d",&a,&b);
    switch (ch)
    {
    case 1:
        ans=a+b;
        printf("\nThe sum if %d and %d is %d",a,b,ans);
        break;
    case 2:
        printf("\nSub of %d and %d is %d",a,b,a-b);
        break;
    case 3: 
        printf("\nMult of %d and %d is %d",a,b,a*b);
        break;
    case 4:
        printf("\nDiv of %d and %d is %d",a,b,a/b);
        break;
    case 5:
        goto end;
    default:
        printf("\n You have enterd wrong ch");
        break;
    }
    goto up;
    end:
    getch();
}