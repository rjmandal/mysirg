#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the three digit no to find its first digit ==>> ");
    int n;
    scanf("%d",&n);
    printf("%d",n/100);
    getch();
    return 0;
}