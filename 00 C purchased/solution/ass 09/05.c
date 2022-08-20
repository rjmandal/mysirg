#include <stdio.h>
int sumn(int);
int main()
{
    system("cls");
    printf("enter the n no ==>> ");
    int n;
    scanf("%d", &n);
    printf("%d\n", sumn(n));
    return 0;
}
int sumn(int no)
{
    int i, sum = 0;
    for (i = 1; i <=no; i++)
    {
        sum = sum + i;
    }
    return sum;
}