#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no,i=0;
    scanf("%d", &no);
    while (no > 0)
    {
        printf("%d\n", no * 2);
        no--;
    }
    getch();
    return 0;
}