#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no;
    scanf("%d", &no);
    while (no > 0)
    {
        printf("%d\n", no * no);
        no--;
    }
    getch();
    return 0;
}