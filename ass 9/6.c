#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    int i = 1;
    while (i<11)
    {
        printf("%d\n", i * 2-1);
        i++;
    }
    getch();
    return 0;
}