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
        vector<int> b(n - 1), a;
        for (auto &i : b)
            cin >> i;
        a.push_back(b[0]);
        for (int i = 0; i < n - 2; i++)
            a.push_back(min(b[i], b[i + 1]));
        a.push_back(b[n - 2]);
        for (auto i : a)
            cout << i << ' ';
        cout << endl;
    }
}