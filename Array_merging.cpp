#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        unordered_map<int, int> max_len_a, max_len_b;

        int count = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            else
            {
                max_len_a[a[i - 1]] = max(max_len_a[a[i - 1]], count);
                count = 1;
            }
        }
        max_len_a[a[n - 1]] = max(max_len_a[a[n - 1]], count);

        count = 1;
        for (int i = 1; i < n; ++i)
        {
            if (b[i] == b[i - 1])
            {
                count++;
            }
            else
            {
                max_len_b[b[i - 1]] = max(max_len_b[b[i - 1]], count);
                count = 1;
            }
        }
        max_len_b[b[n - 1]] = max(max_len_b[b[n - 1]], count);

        int max_len = 0;
        for (const auto &[key, len] : max_len_a)
        {
            max_len = max(max_len, len + max_len_b[key]);
        }
        for (const auto &[key, len] : max_len_b)
        {
            max_len = max(max_len, len + max_len_a[key]);
        }

        cout << max_len << endl;
    }
    return 0;
}