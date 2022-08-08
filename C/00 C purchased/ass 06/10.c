#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n, i, j;
    printf("enter two no ==>> ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    printf("%d ", i);
            }
        }
    }
}