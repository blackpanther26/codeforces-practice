#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int p = static_cast<int>(floor(log2(k)));
        int res = pow(2,p);
        if (n == 1)
        {
            cout << k << endl;
        }
        else
        {
            cout << res - 1 << " ";
            if (k - (res - 1) > 0)
            {
                cout << k - (res - 1) << " ";
                for (int i = 2; i < n; i++)
                {
                    cout << 0 << ' ';
                }
            }
            else
            {
                for (int i = 1; i < n; i++)
                {
                    cout << 0 << ' ';
                }
            }
            cout << endl;
        }
    }
}