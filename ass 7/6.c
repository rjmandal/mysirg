#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter three digit no ==>> ");
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 >= n2)
        printf("%d", n1);
    else
        printf("%d", n2);
    getch();
    return 0;
}