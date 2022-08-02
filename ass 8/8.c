#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter month no ==>> ");
    int no;
    scanf("%d", &no);
    if (no >= 1 && no <= 12)
    {
        if (no == 2)
            printf("29 or 28");
        else if (no%2)
            printf("31");
        else
            printf("30");
    }
    else
    printf("invalid month no");
    return 0;
}