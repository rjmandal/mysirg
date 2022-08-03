#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no,i;
    scanf("%d", &no);
    i=no-1;
    while (i > 1)
    {
        if (no % i==0)
        break;
        i--;
    }
    if(i==1)
    printf("prime");
    else
    printf("not prime");
    getch();
    return 0;
}