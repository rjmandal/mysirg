#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter side of triangle ==>> ");
    int s1,s2,s3;
    scanf("%d%d%d", &s1,&s2,&s3);
    if (s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
    printf("valid");
    else
    printf("invalid");
    return 0;
}