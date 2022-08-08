#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    printf("enter the no to check it is +ve or non +ve ==>> ");
    int n;
    scanf("%d",&n);
    if(n>0)
    printf("postive");
    else
    printf("non postive");
    getch();
    return 0;
}