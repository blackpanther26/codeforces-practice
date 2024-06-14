#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (char &c : s)
    {
        c = tolower(c);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i'|| s[i] == 'y')
        {
            s.erase(i, 1);
            i--;
        }
        else
        {
            cout<<"."<<s[i];
        }
    }
}