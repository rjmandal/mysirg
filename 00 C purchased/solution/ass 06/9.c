#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n, i;
    printf("enter no ==>> ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ",i);
    }
}