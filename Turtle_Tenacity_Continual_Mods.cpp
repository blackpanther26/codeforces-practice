#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt =0;
        int g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }
        for (int  i = 0; i < n; i++)
        {
            if (a[i]==g)
            {
                cnt++;
            }
        }
        if (cnt>1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
