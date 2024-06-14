#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0;
    int k;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {
            c++;
            k = i;
            break;
        }
    }
    for (int i = k + 1; i < s.length(); i++)
    {
        if (s[i] == 'e')
        {
            c++;
            k = i;
            break;
        }
    }
    for (int i = k + 1; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            c++;
            k = i;
            break;
        }
    }
    for (int i = k + 1; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            c++;
            k = i;
            break;
        }
    }
    for (int i = k + 1; i < s.length(); i++)
    {
        if (s[i] == 'o')
        {
            c++;
            k = i;
            break;
        }
    }
    if (c == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
}