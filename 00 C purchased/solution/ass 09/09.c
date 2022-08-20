#include <stdio.h>
#include <stdlib.h>
int fact(int,int);
int main()
{
    system("cls");
    int n,r;
    printf("enter no of item ==>> ");
    scanf("%d", &n);
    printf("enter r ==>> ");
    scanf("%d",&r);
    printf("%d\n", fact(n,r));
    return 0;
}
int fact(int no,int digit)
{
    int fact=1,d=1;
    digit=no-digit;
    while (digit > 0)
    {
        d = d * digit;
        digit--;
    }
    while(no>0)
    {
        fact=fact*no;
        no--;
    }
    return fact/d;
}