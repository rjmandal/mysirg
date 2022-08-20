#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void occurance(int, int);
int main()
{
    system("cls");
    int no, digit;
    printf("enter no ==>> ");
    scanf("%d", &no);
    printf("enter digit ==>> ");
    scanf("%d", &digit);
    occurance(no, digit);
    return 0;

}
void occurance(int no, int digit)
{
    int ld, r = 0, i = 0;
    while (no > 0)
    {
        ld = no % 10;
        no = no / 10;

        if (ld != digit)
            r = r * 10 + ld;
    }
    // while (r > 0)
    // {
    //     ld = no % 10;
    //     r = r / 10;
    //     r = r * 10 + ld;
    // }
    printf("%d", r);
}