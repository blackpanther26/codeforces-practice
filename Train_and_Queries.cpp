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
        map<int, pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            int u;
            cin >> u;
            if (!m.count(u))
            {
                m[u].first = i;
                m[u].second = i;
            }
            else
                m[u].second = i;
        }
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            if (!m.count(a) || !m.count(b) || m[a].first > m[b].second)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}