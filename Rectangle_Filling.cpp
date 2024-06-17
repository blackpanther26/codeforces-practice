#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> gr(n);

        for (int i = 0; i < n; i++)
            cin >> gr[i];

        string ans = "YES";

        if (gr[0][0] != gr[n - 1][m - 1])
        {
            bool impossible = true;

            for (int j = 0; j < m - 1; j++)
            {
                if (gr[0][j] != gr[0][j + 1] || gr[n - 1][j] != gr[n - 1][j + 1])
                {
                    impossible = false;
                    break;
                }
            }
            if (impossible)
                ans = "NO";
            else
            {
                impossible = true;

                for (int i = 0; i < n - 1; i++)
                {
                    if (gr[i][0] != gr[i + 1][0] || gr[i][m - 1] != gr[i + 1][m - 1])
                    {
                        impossible = false;
                        break;
                    }
                }

                if (impossible)
                    ans = "NO";
            }
        }
        cout << ans << endl;
    }
    return 0;
}