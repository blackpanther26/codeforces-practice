// a<=10^9,b<=10^9, M<=10^9
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
// const int M = 1e9+7;
ll binExpRecur(int a, int b)
{
    if (b == 0)
        return 1;
    ll res = binExpRecur(a, b / 2);
    if (b & 1)
        return a * res * res; // agar modulo lena ho : return (a * (res * res) % M ) % M;
    else
        return res * res;
}
int binExpIter(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * 1LL * a; // ans = (ans * 1LL * a) % M;
        a = a * 1LL * a;         // a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b;
    cout << binExpRecur(a, b) << endl;
    cin >> c >> d;
    cout << binExpIter(c, d) << endl;
}
