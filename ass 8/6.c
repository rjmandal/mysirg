#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the character ==>> ");
    char ch;
    scanf("%c", &ch);
    if(ch>=65 && ch<=90)
    printf("uppercase alphabet");
    else if(ch>=97 && ch<=122)
    printf("lowercase alphabet");
    else if(ch>=48 && ch<=57)
    printf("digit");
    else
    printf("special character");
    return 0;
}