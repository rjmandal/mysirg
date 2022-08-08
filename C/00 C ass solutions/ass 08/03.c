#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter the no ==>> ");
    int n;
    scanf("%d", &n);
    if (n<0)
        printf("negative");
    else if(n==0)
        printf("zero");
    else 
        printf("postive");
    return 0;
}