#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int best = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        best = min(best, a[i + n - 1] - a[i]);
    }
    cout << best << endl;
    return 0;
}
