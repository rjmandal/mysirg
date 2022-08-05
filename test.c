#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
    int i,j=1;
    while(j<11)
    {
        for(i=1;i<=10;i++)
        {
            printf("  %d  ",j*i);
        }
        printf("\n");
        j++;
    }
}