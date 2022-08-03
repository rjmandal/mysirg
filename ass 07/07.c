#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter cost price and selling price ==>> ");
    int c, s;
    scanf("%d %d", &c, &s);
    printf("%d%%",(s-c)*100/c);
    getch();
    return 0;
}