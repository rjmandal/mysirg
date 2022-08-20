#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
    system("cls");
    int n;
    printf("enter no ==>> ");
    scanf("%d", &n);
    printf("%d\n", prime(n));
    return 0;
}
int prime(int no)
{
    int i;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        break;
    }
    if(i==no)
    return 1;
    else
    return 0;
}