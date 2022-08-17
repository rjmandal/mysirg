#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int no,i=0;
    scanf("%d", &no);
    while (i < no)
    {
        printf("%d\n", i * 2);
        i++;
    }
    getch();
    return 0;
}