#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s3[i] && s2[i] != s3[i])
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}