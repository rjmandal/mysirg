#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void armstrong(int);
int main()
{
    system("cls");
    int n;
    printf("enter no1 ==>> ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
void armstrong(int no)
{
    int count=0,r,arm=0,n,n1;
    n1=n=no;
    while (no>0)
    {
        no=no/10;
        count++;
    }
    while(n>0)
    {
        r=n%10;
        n=n/10;
        arm=arm+pow(r,count);
    }
    if(n1==arm)
    printf("armstrong no");
    else 
    printf("not a armstrong no ");
}