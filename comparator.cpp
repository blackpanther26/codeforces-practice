#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    // if (a.first != b.first)
    // {
    //     if (a.first > b.first)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
    // else
    // {
    //     if (a.second < b.second)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
    if (a.first != b.first)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << a[i].second << endl;
    }
}
// use upper bound and lower bound functions only after sorting , upper bound returns the elemenr greater then the given elemen twhereas lower bound gives that element only if present otherwise the element greater than that
