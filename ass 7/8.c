#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter marks of your 5 subjects ==>> ");
    int c, s,e,h,p;
    scanf("%d %d %d %d %d", &c, &s, &e, &h, &p);
    if (c >= 33 && s >= 33 && e >= 33 && h >= 33 && p >= 33)
    printf("passed");
    else
    printf("failed");
        getch();
    return 0;
}