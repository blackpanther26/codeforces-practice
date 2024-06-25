#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        int m[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> m[i][j];
        int mismatch = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (m[i][j] != m[n - i - 1][n - j - 1])
                    mismatch++;
        mismatch /= 2;
        if (mismatch > k)
            cout << "NO\n";
        else
        {
            k -= mismatch;
            if (n & 1)
                cout << "YES\n";
            else if (k & 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}