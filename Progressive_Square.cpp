#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define all(x) (x).begin(), (x).end()

using ll = signed long long int;
using vl = vector<ll>;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll c, d;
        cin >> n >> c >> d;
        vl a(n * n);
        for (int i = 0; i < n * n; ++i)
            cin >> a[i];
        sort(all(a));
        vl b(n * n);
        b[0] = a[0];
        for (int i = 1; i < n; ++i)
            b[i] = b[i - 1] + c;
        for (int i = 1; i < n; ++i)
            for (int j = 0; j < n; ++j)
                b[i * n + j] = b[(i - 1) * n + j] + d;
        sort(all(b));
        cout << (a == b ? "YES" : "NO") << '\n';
    }
}