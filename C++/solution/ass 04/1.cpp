#include<iostream>
using namespace std;
main()
{
    system("cls");
    int n,i=2;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"no prime";
            break;
        }
        i++;
    }
    if(i==n)
    {
    cout<<"prime";
    }
}