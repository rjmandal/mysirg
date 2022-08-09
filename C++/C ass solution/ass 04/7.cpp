#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int no,r=0,b=0;
    cout<<"enter the no ==>> ";
    cin>>no;
    while (no>0)
    {
        r=r*10+no%2;
        no=no/2;
    cout<<r;
    }
    cout<<endl<<r<<endl;
    while(r>0)
    {
        b=b+r%10;
        r=r/10;
    }
    cout<<r;
    return 0;
}