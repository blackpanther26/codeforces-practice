#include <iostream>
using namespace std;
int main()
{
    string s;
    int ct = 0;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
            ct++;
    }
    if (ct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}