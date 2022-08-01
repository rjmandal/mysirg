#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the three digit no and see the magic ==>> ");
    int n1,n2;
    scanf("%d",&n1);
    n2=n1%10;
    n1=n1/10;
    printf("%d",n2*100+n1);
    getch();
    return 0;
}