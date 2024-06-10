#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n;
        int c[n];
        int hsh[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            hsh[c[i]]++;
        }
        for (int i = 0; i < 101; i++)
        {
            if (hsh[i] >= k)
            {
                ans = k - 1;
            }
        }
        cout << ans << endl;
    }
}