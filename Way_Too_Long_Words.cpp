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
        if (s.size() > 10)
        {
            cout << s[0];
            int c = 0;
            for (int i = 1; i < s.size() - 1; i++)
            {
                c++;
            }
            cout << c << s[s.size() - 1] << endl;
        }
        else cout << s << endl;
    }
}