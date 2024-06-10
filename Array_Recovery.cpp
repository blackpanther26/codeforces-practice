#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        int d[n], a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        a[0] = d[0];
        for (int i = 0; i < n - 1; i++)
        {
            int ele1 = d[i + 1] + a[i];
            //cout << "ele1 " << ele1 << endl;
            int ele2 = -d[i + 1] + a[i];
            //cout << "ele2 " << ele2 << endl;
            int pr = ele1 * ele2;
            //cout << "pr " << pr << endl;
            if (pr <= 0 || (pr == a[i]*a[i] && d[i+1]==0))
            {
                if (pr == 0 && d[i + 1] != 0)
                {
                    ans = -1;
                }
                else
                    a[i + 1] = a[i] + d[i + 1];
            }
            else
            {
                ans = -1;
                break;
            }
        }
        if (ans == -1)
        {
            cout << ans << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}