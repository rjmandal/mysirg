#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no, i = 1;
    scanf("%d", &no);
    while (i <= no)
    {
        printf("%d\n", i);
        i++;
    }
    getch();
    return 0;
}