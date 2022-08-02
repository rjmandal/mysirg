#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter alphabet ==>> ");
    char ch;
     scanf("%c", &ch);
     int c=ch;
    if (c >= 65 && c <= 90)
        printf("upper case");
    else
        printf("lower case");
    getch();
    return 0;
}