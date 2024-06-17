#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    int q;
    cin >> q;
    long long m[q];
    for (int i = 0; i < q; i++)
    {
        cin >> m[i];
    }
    for (int i = 0; i < q; i++)
    {
        auto lb = upper_bound(x, x + n, m[i]);
        int pos = lb - x;
        cout << pos << endl;
    }
    return 0;
}