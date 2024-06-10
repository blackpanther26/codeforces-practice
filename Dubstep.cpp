#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB")
        {
            cout << " ";
            i += 2;
            continue;
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}