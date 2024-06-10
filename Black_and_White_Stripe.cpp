#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // Count white cells in the first window of size k
        int cnt = 0;
        for (int i = 0; i < k; ++i)
        {
            if (s[i] == 'W')
            {
                cnt++;
            }
        }

        // Initialize the minimum with the first window's white cell count
        int mini = cnt;

        // Slide the window across the string
        for (int i = k; i < n; ++i)
        {
            if (s[i - k] == 'W')
            {
                cnt--;
            }
            if (s[i] == 'W')
            {
                cnt++;
            }
            mini = min(mini, cnt);
        }

        cout << mini << endl;
    }
}