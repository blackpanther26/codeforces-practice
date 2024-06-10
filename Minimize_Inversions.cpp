#include <iostream>
#include <vector>
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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        vector<vector<int>> pr;
        for (int i = 0; i < n; i++)
        {
            pr.push_back({v1[i] + v2[i] - 2, v1[i], v2[i]});
        }
        sort(pr.begin(), pr.end());
        for (auto a : pr)
            cout << a[1] << " ";
        cout << endl;
        for (auto a : pr)
            cout << a[2] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}