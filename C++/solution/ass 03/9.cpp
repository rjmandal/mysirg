#include<iostream>
using namespace std;
main()
{
    system("cls");
    int n,c;
    cin>>n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    cout<<c;
}