#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n, i;
    printf("enter two no ==>> ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            printf("%d ",i);
    }
}