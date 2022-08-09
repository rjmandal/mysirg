#include<stdio.h>
#include<conio.h>
int main()
{
    int n=2,i;
    while(n<100)
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