#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int p,t,r;
cout<<"program to found simple interest\n";
cout<<"enter principal amount ==>> ";
cin>>p;
cout<<"enter rate of interest ==>> ";
cin>>r;
cout<<"enter total time ==>> ";
cin>>t;
cout<<"simple interest ==>> "<<(p*r*t)/100;
}