#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll l = 1, r = n;
        for (ll i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                cout << l << " ";
                l++;
            }
            else
            {
                cout << r << " ";
                r--;
            }
        }
        cout << endl;
    }
}