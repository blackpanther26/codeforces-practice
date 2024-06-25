#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        int ct = 0;
        for (int i = y; i <= x; i++)
        {
            ct++;
        }
        for (int i = x - 1; i >= y + 1; i--)
        {
            ct++;
        }
        cout << ct << endl;
        for (int i = y; i <= x; i++)
        {
            cout << i << " ";
        }
        for (int i = x - 1; i >= y + 1; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}