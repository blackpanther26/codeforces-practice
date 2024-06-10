#include <iostream>
#include <vector>
#include <map>
using namespace std;
const int N = 100;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp, idx;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        idx[a[i]] = i;
    }
    int cnt = 0;
    int f = -1;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            cnt++;
            f = it.first;
        }
    }
    if (cnt < 2)
    {
        cout << "-1\n";
        return;
    }
    vector<int> ans(n, 1);
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            ans[idx[it.first]] = 2;
        }
    }
    ans[idx[f]] = 3;
    for (auto c : ans)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}