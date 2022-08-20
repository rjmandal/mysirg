#include <stdio.h>
int evno(int);
int main()
{
    system("cls");
    printf("enter the n no ==>> ");
    int n;
    scanf("%d", &n);
    printf("%d\n", evno(n));
    return 0;
}
int evno(int no)
{
    if(no%2==0)
    return 1;
    else
    return 0;
}