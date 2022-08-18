#include <stdio.h>
int sumn(int);
int main()
{
    system("cls");
    printf("enter the n no ");
    int n;
    scanf("%d", &n);
    sumn(n);
    return 0;
}
int sumn(int no)
{
    for (int i = 0; i < no; i++)
    {
        printf("%d\n", i * 2);
    }
}