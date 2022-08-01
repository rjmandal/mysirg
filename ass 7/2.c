#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int n;
    scanf("%d",&n);
    if(n%5)
    printf("non divisible");
    else
    printf("dvisible");
    getch();
    return 0;
}