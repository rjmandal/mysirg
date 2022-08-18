#include<iostream>
using namespace std;
main()
{
    system("cls");
    int n,sum=0,i=0;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    cout<<sum;
}