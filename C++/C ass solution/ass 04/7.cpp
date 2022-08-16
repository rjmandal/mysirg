#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("cls");
    int no, ans=0, r, i = 0;
    cout << "enter the no ==>> ";
    cin >> no;
    while (no > 0)
    {
        r = no % 2;
        no = no / 2;

        ans = r * pow(10, i) + ans;
        i++;
    }
    cout << endl
         << ans;

    // while (no>1)
    // {
    //     r=r*10+no%2;
    //     no=no/2;
    //     // cout<<r<<endl;
    // }
    // // cout<<endl<<r<<endl;
    // while(r>1)
    // {
    //     b=b*10+r%10;
    //     r=r/10;
    //     // cout<<r<<endl;
    // }
    // cout<<endl<<b;
    return 0;
}