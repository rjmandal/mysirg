#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter no ==>> ");
    int n,r=0;
    scanf("%d", &n);
    while (n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    printf("%d",r);
    getch();
    return 0;
}