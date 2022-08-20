#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void armstrong(int, int);
int main()
{
    system("cls");
    int lr, ur;
    printf("enter lower range ==>> ");
    scanf("%d", &lr);
    printf("enter upper range ==>> ");
    scanf("%d", &ur);
    armstrong(lr, ur);
    return 0;
}
void armstrong(int lr, int ur)
{
    int r, n, count, arm, n1;
    while (lr <= ur)
    {
        count = 0, arm = 0, n1 = n = lr;
        while (n1 > 0)
        {
            n1 = n1 / 10;
            count++;
        }
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
            arm = arm + pow(r, count);
        }
        if (lr == arm)
            printf("%d\n", arm);
        lr++;
    }
}