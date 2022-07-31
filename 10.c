#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the base and height of triangle respectively ==>> ");
    float b,h;
    scanf("%f %f",&b,&h);
    printf("area of triangle is %f",b*h/2);
    getch();
    return 0;
}