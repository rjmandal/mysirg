#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter two no ==>> ");
    int n1, n2, l;
    scanf("%d%d", &n1, &n2);
    for (l = n1 > n2 ? n1 : n2; l <= n1 * n2; l++)
    {
        if (l % n1 == 0 && l % n2 == 0)
        {
            printf("%d", l);
            break;
        }
    }
    getch();
    return 0;
}