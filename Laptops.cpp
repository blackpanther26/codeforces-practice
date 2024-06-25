#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    sort(v.begin(), v.end());
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
        if (v[i].second > v[n - 1].second || (v[i].first < v[i + 1].first && v[i].second > v[i + 1].second))
            flag = true;
    if (flag)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}