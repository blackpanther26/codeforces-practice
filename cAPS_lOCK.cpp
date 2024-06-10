#include <iostream>
#include <cctype>
using namespace std;

bool isAllUppercase(const string &s)
{
    for (size_t i = 1; i < s.length(); ++i)
    {
        if (!isupper(s[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    if (isAllUppercase(s))
    {
        char ch = s[0];
        if (isupper(ch))
        {
            cout << (char)tolower(ch);
        }
        else
        {
            cout << (char)toupper(ch);
        }

        for (size_t i = 1; i < s.length(); i++)
        {
            cout << (char)tolower(s[i]);
        }
    }
    else
    {
        cout << s;
    }

    return 0;
}