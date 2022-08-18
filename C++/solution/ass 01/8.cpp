#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    float a,b;
    cout<<"program to swap value"<<"\nenter the two value respectively ==>> ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value after swaping "<<a<<b;
}