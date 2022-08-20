#include<stdio.h>
float area(float);
int main()
{
    system("cls");
    printf("enter the radius of circle ");
    float r;
    scanf("%f",&r);
    r=area(r);
    printf("%f",r);
    return 0;
}
float area(float x)
{
    x=2*3.14*x;
    return x;
}