#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the no and digit toapend them respectively ==>> ");
    int n1,d;
    scanf("%d %d",&n1,&d);
    printf("%d",n1*10+d);
    getch();
    return 0;
}