#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mtx[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mtx[i][j];
        }
    }
    int start = 1;
    int end = 1e9;
    int ans = 1;
    while (start - end > 1)
    {
        int mid = start + end / 2;
        bool validRowFound = false;
        bool validColFound = false;

        // Search for valid row
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i <= m; i++)
            {
                if (mtx[i][j] < mid)
                {
                    break;
                }
                if (j == m)
                {
                    validRowFound = true;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i <= m; i++)
            {
                if (mtx[i][j] < mid)
                {
                    break;
                }
                if (j == n)
                {
                    validColFound = true;
                }
            }
        }

        if (validColFound && validRowFound)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
}
