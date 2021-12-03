#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area_circle;
    const float PI=3.14;
    printf("\nEnter radius");
    scanf("%f",&r);
    area_circle=PI*r*r;
    printf("\n Radius=%.2f and Area Of Circle=%.2f",r,area_circle);
    getch();
}