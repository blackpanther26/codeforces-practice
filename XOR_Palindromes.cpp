#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mismatch = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n / 2; ++i)
        {
            mismatch += (s[i] != s[n - i - 1]);
        }

        string res(n + 1, '0');
        if (n % 2 != 0)
        {
            for (int i = mismatch; i <= n - mismatch; ++i)
            {
                res[i] = '1';
            }
        }
        else
        {
            for (int i = mismatch; i <= n - mismatch; ++i)
            {
                res[i] = (flag % 2 == 0) ? '1' : '0';
                flag++;
            }
        }

        cout << res << endl;
    }
    return 0;
}