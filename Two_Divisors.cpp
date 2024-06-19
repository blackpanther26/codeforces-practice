#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x;
        cin >> a >> b;
        if (b % a == 0)
            x = (b / a) * b;
        else
            x = lcm(a, b);
        cout << x << endl;
    }
}