#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int c = 0;
    cin >> n;
    string s = to_string(n);
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if (c == s.length())
    {
        cout << "YES\n";
        return 0;
    }
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES\n";
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        string g = to_string(i);
        int c2 = 0;
        for (size_t j = 0; j < g.length(); j++)
        {
            if (g[j] == '4' || g[j] == '7')
            {
                c2++;
            }
        }
        if (c2 == g.length())
        {
            if (n % i == 0)
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}