#include <stdio.h>
#include <stdlib.h>
void prime(int, int);
int main()
{
    system("cls");
    int n1, n2;
    printf("enter no1 ==>> ");
    scanf("%d", &n1);
    printf("enter no2 ==>> ");
    scanf("%d", &n2);
    prime(n1, n2);
    return 0;
}
void prime(int no1, int no2)
{
    int i;
    while (no1 <= no2)
    {
        for (i = 2; i < no1; i++)
            if (no1 % i == 0)
                break;
        if (i == no1)
            printf("%d\n", no1);
        no1++;
    }
}