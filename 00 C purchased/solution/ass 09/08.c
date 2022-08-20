#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    system("cls");
    printf("enter the n no ==>> ");
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}
int fact(int no)
{
    int fact=1;
    while(no>0)
    {
        fact=fact*no;
        no--;
    }
    return fact;
}