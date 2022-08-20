#include <iostream>
using namespace std;
main()
{
    system("cls");
    int n1, n2,i;
    cin >> n1 >> n2;
    while (n1 <= n2)
    {
        for (i = 2; i < n1; i++)
        
            if (n1 % i == 0)
                break;
        
        if (i == n1)
            cout << n1 << endl;
        n1++;
    }
    // if (i == n1)
    // {
    //     cout << "no prime found";
    // }
}