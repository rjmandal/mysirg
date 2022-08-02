#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the year ==>> ");
    int n;
    scanf("%d", &n);
    if (n%4)
        printf("not a leap year");
    else 
        printf("leap year");
    return 0;
}