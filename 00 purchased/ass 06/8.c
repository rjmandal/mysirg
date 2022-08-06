#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n1, n2, i,h;
    printf("enter two no ==>> ");
    scanf("%d%d", &n1, &n2);
    if (n1 < n2)
    {
        n1 += n2;
        n2 = n1 - n2;
        n1 -= n2;
    }
    for (i = 1; i < n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            h=i;
        }
    }
    if (i == n1)
        printf("%d",h);
}