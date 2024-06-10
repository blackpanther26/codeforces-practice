#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int pr = 1;
        for (int i = 0; i < n; i++)
        {
            pr *= a[i];
            if (pr > 2023)
                break;
        }
        if (2023 % pr != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int x = 2023 / pr;
            cout << x << " ";
            for (int i = 0; i < k - 1; i++)
                cout << "1" << " ";
            cout << endl;
        }
    }
}