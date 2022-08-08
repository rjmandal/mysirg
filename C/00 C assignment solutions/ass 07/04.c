#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int n;
    scanf("%d",&n);
    if(n%2)
    printf("odd");
    else
    printf("even"); 
    getch();
    return 0;
}