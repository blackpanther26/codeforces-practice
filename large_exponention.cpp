#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll M = 1e9 + 7;

ll binMultiply(ll a, ll b)
{
    ll ans = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

ll binExp(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = binMultiply(ans, a);
        }
        a = binMultiply(a, a);
        b >>= 1;
    }
    return ans;
}

int main()
{
    cout << binExp(3233456456796LL, 100000000000000000LL) << endl;
    return 0;
}