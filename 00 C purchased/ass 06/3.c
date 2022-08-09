#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n1, n2, i;
    printf("enter the two no ==>> ");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2)
    {
        n1 += n2;
        n2 = n1 - n2;
        n1 -= n2;
    }
    while (n1 <= n2)
    {
        for (i = 2; i < n1; i++)
        {
            if (n1 % i == 0)
                break;
        }
        if (i == n1)
            printf("%d\n", n1);
        n1++;
    }
}