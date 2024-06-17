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
        long long rem = 0, ans = 0;
        for (long long i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                rem++;
            else
            {
                if (rem > 0)
                    ans += rem + 1;
            }
        }
        cout << ans << endl;
    }
}