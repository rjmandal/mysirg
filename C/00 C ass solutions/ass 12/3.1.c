#include <stdio.h>

int main()
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 4; i++)
        {
            if(j>=5-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}