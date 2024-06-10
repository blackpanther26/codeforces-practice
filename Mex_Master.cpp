#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum0 = 0;
        bool f = false;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                sum0++;
            }
            else if (x >= 2)
            {
                f = true;
            }
        }
        if (sum0 <= (n + 1) / 2)
        {
            cout << "0\n";
        }
        else if (f || sum0 == n)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}