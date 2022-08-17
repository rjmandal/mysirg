#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n,i;
    printf("enter no ==>> ");
    scanf("%d", &n);
    while (n)
    {
        n++;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
        {
            printf("%d\n", n);
            break;
        }
    }
}