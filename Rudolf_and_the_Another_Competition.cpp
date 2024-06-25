#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<ll, pair<ll, ll>>> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            vector<ll> tmp(m);
            vector<ll> t(m);
            for (int j = 0; j < m; j++)
            {
                cin >> tmp[j];
            }
            sort(tmp.begin(), tmp.end());
            t[0] = tmp[0];
            for (int j = 1; j < m; j++)
            {
                t[j] = t[j - 1] + tmp[j];
            }
            ll penalty = 0;
            ll points = 0;
            for (int j = 0; j < m; j++)
            {
                if (t[j] <= h)
                {
                    penalty += t[j];
                    points++;
                }
                else
                {
                    break;
                }
            }
            p[i] = make_pair(i, make_pair(points, penalty));
        }

        sort(p.begin() + 1, p.end(), [](const pair<ll, pair<ll, ll>> &a, const pair<ll, pair<ll, ll>> &b)
             {
            if (a.second.first == b.second.first && a.second.second == b.second.second)
                return a.first < b.first; 
            if (a.second.first == b.second.first)
                return a.second.second < b.second.second;
            return a.second.first > b.second.first; });

        int rank = 1;
        bool allSame = true;
        for (int i = 2; i <= n; ++i) 
        {
            if (p[i].second != p[1].second)
            {
                allSame = false;
                break;
            }
        }

        if (allSame)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; ++i)
            {
                if (p[i].first == 1)
                {
                    cout << rank << endl;
                    break;
                }
                rank++;
            }
        }
    }

    return 0;
}