#include <stdio.h>
int main()
{
    while (1)
    {
        // system("cls");
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Divison");
        printf("\n5.Exit");
        printf("\nchoose from above and enter your choice ==>> ");
        int n, a, b;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            scanf("%d%d", &a, &b);
            printf("%d", a + b);
            break;
        case 2:
            scanf("%d%d", &a, &b);
            printf("%d", a - b);
            break;
        case 3:
            scanf("%d%d", &a, &b);
            printf("%d", a * b);
            break;
        case 4:
            scanf("%d%d", &a, &b);
            printf("%d", a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("wrong choice try again");
        }
    }
}