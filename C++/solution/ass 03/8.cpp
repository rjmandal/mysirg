#include<iostream>
using namespace std;
main()
{
    system("cls");
    int n,fact=1,i=0;
    cin>>n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    cout<<fact;
}