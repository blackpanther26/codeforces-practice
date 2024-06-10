#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << "1 2" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }
        int c = 4;
        a[0] = 2;
        a[n / 2] = 1;
        a[n - 1] = 3;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = c++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}