#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the cost price and selling price respectively ==>> ");
    float cost,sell;
    scanf("%f %f",&cost,&sell);
    printf("profit is %f",sell-cost);
    getch();
    return 0;
}