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
        cin >> n;
        string s;
        cin >> s;
        ll tot = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - i - 1) - i);
                tot += i;
            }
            else
            {
                v.push_back(i - (n - i - 1));
                tot += n - i - 1;
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                tot += v[i];
            }
            cout << tot << ' ';
        }
        cout << endl;
    }
}