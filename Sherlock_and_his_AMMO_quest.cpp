#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second << " " << v[i].first << endl;
    }
}