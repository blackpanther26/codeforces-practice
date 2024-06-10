#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        int chk = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                chk = 1;
        }
        int val = v[1];
        for (int i = 2; i < n + 1; i++)
            val = gcd(val, v[i]);
        if (chk == 1 || val == 1)
        {
            cout << 0 << " ";
            continue;
        }
        int ans = n;
        for (int i = n; i >= 1; i--)
        {
            int x = gcd(i, v[i]);
            int y = gcd(x, val);
            if (y == 1)
            {
                ans = n - i + 1;
                break;
            }
        }
        vector<int> g(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            g[i] = gcd(i, v[i]);
        }
        reverse(g.begin() + 1, g.end());
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                int x1 = gcd(g[i], g[j]);
                if (x1 == 1)
                {
                    ans = min(ans, i + j);
                }
            }
        }
        cout << ans << endl;
    }
}