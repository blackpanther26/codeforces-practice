#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans = 3;
        cin >> n;
        int p[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (p[p[i]] == i)
                ans = 2;
        }
        cout << ans << endl;
    }
}