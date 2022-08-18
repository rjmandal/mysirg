#include <stdio.h>
void even(int);
int main()
{
    system("cls");
    printf("enter the n no ");
    int n;
    scanf("%d", &n);
    even(n);
    return 0;
}
void even(int no)
{
    for(int i=0;i<no;i++)
    {
        printf("%d\n",i*2);
    }
}