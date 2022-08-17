#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int n, i, f, no;
    printf("enter no ==>> ");
    scanf("%d", &n);
    no = n;
    for (f = 2; f <= n; f++)
    {
        if (n % f == 0)
        {
            for (i = 2; i < f; i++)
            {
                if (f % i == 0)
                {
                    break;
                }
            }
            while (1)
            {
                i=0;
                if (no % f == 0 && i != n)
                {
                    no = no / f;
                    printf("%d", f);
                    i=i*f;
                }
                else
                break;
            }
        }
    }
    return 0;
}