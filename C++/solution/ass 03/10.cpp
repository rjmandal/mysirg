#include<iostream>
using namespace std;
main()
{
    system("cls");
    int n,sum=0,c,no,q;
    cin>>n;
    while(n>0)
    {
        q=n%10;
        n=n/10;
        sum=sum+q;
    }
    cout<<sum;
}