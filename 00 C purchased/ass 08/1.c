#include<stdio.h>
int main()
{
    system("cls");
    printf("enter the month no ==>> ");
    int n;
    scanf("%d",&n);
    if(n%2==0)
    n=2;
    else
    n=1;
    switch(n)
    {
        case 1:
        printf("31");
        break;
        case 2:
        printf("30");
        break;
        default:
        printf("wrong month");  
    }
    
}