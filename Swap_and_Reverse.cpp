#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> odd, even;

        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
                even.push_back(s[i]);
            else
                odd.push_back(s[i]);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        
        string ans1;
        for (int i = 0; i < max(odd.size(), even.size()); i++)
        {
            if (i < even.size())
            {
                ans1 += even[i];
            }
            if (i < odd.size())
            {
                ans1 += odd[i];
            }
        }
        if (k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << '\n';
        }
        else
        {
            cout << ans1 << endl;
        }
    }
}