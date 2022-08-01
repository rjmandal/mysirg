#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the two no to swap them ==>> ");
    int n1,n2,n3;
    scanf("%d %d",&n1,&n2);
    n3=n1;
    n1=n2;
    n2=n3;
    printf("value of n1 = %d and n2 = %d",n1,n2);
    getch();
    return 0;
}