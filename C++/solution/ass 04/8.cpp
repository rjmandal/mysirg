#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("cls");
    int no, ans = 0, r, i = 0;
    cout << "enter the no ==>> ";
    cin >> no;
    while (no > 0)
    {
        r = no % 8;
        no = no / 8;

        ans = r * pow(10, i) + ans;
        i++;
    }
    cout << endl
         << ans;
}