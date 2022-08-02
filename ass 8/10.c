#include <stdlib.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter your marks ph ,chem ,bio ,maths , comp resp ==>> ");
    int p,ch,b,m,c;
    scanf("%d%d%d%d%d", &p,&ch,&b,&m,&c);
    c=p+ch+m+c;
    p=c/5;
    if(p>=90)
    printf("A grade");
    else if(p>=80)
    printf("B grade");
    else if(p>=70)
    printf("C grade");
    else if(p>=60)
    printf("D grade");
    else if(p>=40)
    printf("E grade");
    else
    printf("F grade");
    return 0;
}