#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        vector<int> res(31, 0);
        for (int i = 0; i < 30; i++)
        {
            if (1ll & (x >> i))
            {
                if (res[i])
                {
                    res[i + 1] = 1;
                    res[i] = 0;
                }
                else if (i > 0)
                {
                    if (res[i - 1] == 1)
                    {
                        res[i + 1] = 1;
                        res[i - 1] = -1;
                    }
                    else
                    {
                        res[i] = 1;
                    }
                }
                else if (i == 0)
                {
                    res[i] = 1;
                }
            }
        }
        int lastIndex = 0;
        for (int i = 0; i <= 30; i++)
        {
            if (res[i] != 0)
            {
                lastIndex = i;
            }
        }

        cout << (lastIndex + 1) << '\n';
        for (int i = 0; i <= lastIndex; i++)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
    }
}