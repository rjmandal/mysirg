#include<stdio.h>
#include<conio.h>
int main()
{
    int n=2,i,no;
    printf("enter no ==>> ");
    scanf("%d",&no);
    while(n<=no)
    {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    printf("%d\n",n);
    n++;
    }
}