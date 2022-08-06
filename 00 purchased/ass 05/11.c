#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    printf("enter the no ==>> ");
    scanf("%d", &n);
    for (i = -1; i <= n; i++)
    {
        if (a == n)
            break;
        c = a + b;
        a = b;
        b = c;
    }
    if (a != n)
        printf("no");
    else
        printf("yes");

    return 0;
}