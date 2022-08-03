#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the the no to find its last digit ==>> ");
    int n;
    scanf("%d",&n);
    printf("%d",n%10);
    getch();
    return 0;
}