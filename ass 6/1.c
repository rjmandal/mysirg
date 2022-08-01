#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    int a;
    float f;
    char ch;
    double d;
    printf("%d\n%d\n%d\n%d", sizeof(a), sizeof(f), sizeof(ch), sizeof(d));
    getch();
    return 0;
}