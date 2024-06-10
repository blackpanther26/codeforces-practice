#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int c = 0, mx = -1, mi = n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                c++;
                mx = max(mx, i);
                mi = min(mi, i);
            }
        }
        if (c == 2 && mx - mi == 1)
        {
            cout << "NO" << endl;
        }
        else if (c % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
