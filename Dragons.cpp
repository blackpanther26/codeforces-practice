#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    bool ans = true;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    int sum = s;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i].first < sum)
            sum += v[i].second;
        else
            ans = false;
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}