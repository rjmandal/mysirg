#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    printf("enter age and investd amount respectively ==>> ");
    int age, p;
    scanf("%d %d", &age, &p);
    if (p <= 10000 && p >= 100000)
        printf("invested amount is wrong");
    else if (age >= 18 && age <= 25)
        printf("maturity amount is %d", p * 5 * 30 / 100+p);
    else if (age >= 26 && age <= 40)
        printf("maturity amount is %d", p * 5 * 20 / 100+p);
    else if (age >= 41 && age <= 55)
        printf("maturity amount is %d", p * 5 * 10 / 100+p);
    else
        printf("you entered wrong age");

    getch();
    return 0;
}