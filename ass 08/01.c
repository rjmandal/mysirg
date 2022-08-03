#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int n;
    scanf("%d", &n);
    if (n % 3 || n % 2)

        printf("no");
    else
        printf("yes");
    return 0;
}