#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, q;
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= m;
    }
    sort(a, a + n);
    cin >> q;
    while (q--)
    {
        long long x;
        cin >> x;
        x %= m;
        long long *ptr = upper_bound(a, a + n, m - x - 1);
        if (ptr != a)
        {
            ptr--;
        }
        cout << max((a[n - 1] + x) % m, (*ptr + x) % m) << endl;
    }
}
