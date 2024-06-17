#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(1001, -1);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }
        int ans = -1;
        for (int i = 1; i < 1001; i++)
        {
            if (a[i] != -1)
            {
                for (int j = 1; j < 1001; j++)
                {
                    if (a[j] != -1 && gcd(i, j) == 1)
                    {
                        ans = max(ans, a[i] + a[j]);
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}