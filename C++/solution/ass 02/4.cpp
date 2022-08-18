#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
    system("CLS");
     int a,b,c,d;
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        cout<<"real and distict";
    }
    else if(d==0)
    {
    cout<<"real and equal";
    }
    else
    {
    cout<<"imaginary";
    }
        
}