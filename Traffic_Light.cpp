#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char letter;
        cin >> n >> letter;
        string s;
        cin >> s;
        s += s;
        int maxi = 0, cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == letter)
            {
                cnt = 0;
                while (s[i] != 'g' && i < s.size())
                {
                    cnt++;
                    i++;
                }
                if (cnt > maxi)
                {
                    maxi = cnt;
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}