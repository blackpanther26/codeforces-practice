#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long f;
        cin >> n >> k >> f;
        vector<pair<int, int>> prs;
        for (int i = 0; i < n; ++i)
        {
            int dist, food;
            cin >> dist >> food;
            prs.push_back({k - dist, food});
        }
        int ans = 0;
        multiset<int> food_avl;
        sort(prs.begin(), prs.end());
        bool can_reach = true;
        int cur = 0;
        for (int i = 1; i < k; ++i)
        {
            f--;
            if (prs[cur].first == i)
            {
                food_avl.insert(prs[cur].second);
                cur++;
            }
            if (f == 0)
            {
                if (food_avl.size() == 0)
                {
                    can_reach = false;
                    break;
                }
                else
                {
                    auto it = --food_avl.end();
                    ans++;
                    f += (*it);
                    food_avl.erase(it);
                }
            }
        }
        if (can_reach)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}