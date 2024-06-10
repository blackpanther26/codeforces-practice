#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            ans = true;
            break;
        }
        else
            ans = false;
    }
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}