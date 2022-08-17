#include <stdio.h>
int main()
{
    system("cls");
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                if (j <= 4)
                    printf("%c", 'A' + j-1);
                else
                    printf("%c", 'D' - (j-4));
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}