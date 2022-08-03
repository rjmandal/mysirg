#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter value a , b and c resp ==>> ");
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    a=b*b-4*a*c;
    if(a>0)
    printf("roots are distinct and real");
    else if(a==0)
    printf("roots are real and equal");
    else
    printf("roots are imaginary");
    return 0;
}