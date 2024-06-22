#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (auto &i : a)
            cin >> i;
        sort(a, a + n);
        ll sum = 0;
        for (int i = 1; i < n; i+=2)
        {
            if (a[i] < 0 && a[i - 1] < 0)
            {
                a[i] *= (-1);
                a[i - 1] *= (-1);
            }
            else if ((a[i] * a[i - 1]) <= 0)
            {
                if (abs(a[i]) < abs(a[i - 1]))
                {
                    a[i] *= (-1);
                    a[i - 1] *= (-1);
                }
            }
        }
        for (auto i : a)
            sum += i;
        cout << sum << endl;
    }
}