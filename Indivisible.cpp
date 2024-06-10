#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int sum = (n * (n + 1)) / 2;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n % 2)
            cout << "-1\n";
        else
        {
            int a[n];
            for (int i = 1; i <= n; i++)
            {
                a[i-1]=i;
            }
            for (int i = 0; i < n; i += 2)
            {
                swap(a[i], a[i + 1]);
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}