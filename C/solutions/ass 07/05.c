#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter three digit no ==>> ");
    int n;
    scanf("%d",&n);
    n/=100;
    if(n>0 && n<10)
    printf("yes");
    else
    printf("no"); 
    getch();
    return 0;
}