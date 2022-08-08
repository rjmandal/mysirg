#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the three digit no to find its middle digit ==>> ");
    int n;
    scanf("%d",&n);
    printf("%d",n=n/10%10);
    getch();
    return 0;
}