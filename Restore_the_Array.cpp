#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n - 1]; 
        for (auto &i : a)
        {
            cin >> i;
        }
        ll mini = *min_element(a, a + n - 1);
        bool flag = true, flag1 = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == mini && flag)
            {
                cout << mini << ' ' << mini << ' ';
                flag = false;
            }
            else if (i > 0 && i < n - 2 && a[i] == a[i - 1] && a[i] > a[i + 1] && flag1 && a[i + 1] != mini)
            { 
                cout << a[i + 1] << ' ';
                flag1 = false;
            }
            else
            {
                cout << a[i] << ' ';
            }
        }
        cout << endl;
    }
}
