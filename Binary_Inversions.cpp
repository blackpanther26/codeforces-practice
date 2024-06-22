#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll calc(vector<int> &a)
{
    ll zeroes = 0, ans = 0;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        if (a[i] == 0)
        {
            ++zeroes;
        }
        else
        {
            ans += zeroes;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin>>a[i];
        ll ans = calc(a);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                ans = max(calc(a), ans);
                a[i] = 0;
                break;
            }
        }
        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                ans = max(calc(a), ans);
                a[i] = 1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}