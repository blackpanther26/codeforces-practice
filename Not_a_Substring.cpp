#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag;
        int len = s.length();
        if (s == "()")
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < len - 1; i++)
            {
                if (s[i + 1] == s[i])
                {
                    flag = true;
                    break;
                }
                else
                    flag = false;
            }
            if (flag)
            {
                for (int i = 0; i < len; i++)
                    cout << "()";
            }
            else
            {
                for (int i = 0; i < len; i++)
                    cout << "(";
                for (int i = 0; i < len; i++)
                    cout << ")";
            }
            cout << endl;
        }
    }
}