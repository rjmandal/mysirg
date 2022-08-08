#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter two no ==>> ");
    int n1, n2, i = 2, n;
    scanf("%d%d", &n1, &n2);
    if (n1 >= n2)
        n = n1;
    else
        n = n2;
    while (i <= n)
    {
        if (n1 % i == 0 && n2 % i == 0)
            break;
        i++;
    }
    if (i == 1)
        printf("no lcm found");
    else
        printf("%d",i);
    getch();
    return 0;
}