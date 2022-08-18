#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
    system("CLS");
     int h, b, p;
    cin>>h>>b>>p;
    
    if (h * h == (b * b) + (p * p))
    {
        cout<<"yes";
    }
    else
    cout<<"no";
}