#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        vector<int> g;
        char ans = 'B';
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'R')
                {
                    g.push_back(i);
                }
            }
        }
        for (auto i : g)
        {
            bool ok = true;
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] != 'R')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans = 'R';
            }
        }
        cout << ans << endl;
    }
}