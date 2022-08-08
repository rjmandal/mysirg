#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no, count=0;
    scanf("%d", &no);
    while (no > 0)
    {
       no=no/10; 
        count++;
    }
    printf("%d\n", count);
    getch();
    return 0;
}