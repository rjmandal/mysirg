#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int no,r,v=0;
    cin>>no;
    while(no>0)
    {
        r=no%10;
        no=no/10;
        if(v<r)
        v=r;
    }
    cout<<v;
    return 0;
}