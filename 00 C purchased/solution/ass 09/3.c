#include <stdio.h>
void nnum(int);
int main()
{
    // system("cls");
    printf("enter the n no ");
    int n;
    scanf("%d", &n);
    nnum(n);
    return 0;
}
void nnum(int no)
{
    for(int i=1;i<=no;i++)
    {
        printf("%d\n",i);
    }
}