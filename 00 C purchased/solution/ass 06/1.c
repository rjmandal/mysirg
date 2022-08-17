#include<stdio.h>
#include<conio.h>
int main()
{
    printf("enter the no == >> ");
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    printf("prime");
    else
    printf("not prime");
}