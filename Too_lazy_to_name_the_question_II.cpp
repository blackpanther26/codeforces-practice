#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, int>> p_set;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
        p_set.insert(p[i]);
    }
    int ar_min = INT_MAX, ar_max = INT_MIN;
    
    // Corrected the inner loop condition
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            auto p1 = p[i];
            auto p2 = p[j];
            
            // Ensure we don't consider the same pair twice
            if (p1.first == p2.first || p1.second == p2.second)
                continue;
            
            // Swap to ensure p1 has smaller first element
            if (p1.first > p2.first)
                swap(p1, p2);
            
            int x1 = p1.first, y1 = p2.second;
            int x2 = p2.first, y2 = p1.second;
            
            // Check if both new pairs exist in the set
            if (p_set.find({x1, y1})!= p_set.end() && p_set.find({x2, y2})!= p_set.end())
            {
                int ar = abs(x1 - x2) * abs(y1 - y2);
                ar_min = min(ar_min, ar);
                ar_max = max(ar_max, ar);
            }
        }
    }
    
    // Check if any area was calculated
    if (ar_min == INT_MAX || ar_max == INT_MIN)
        cout << -1 << endl;
    else
        cout << ar_max - ar_min << endl;
    
    return 0;
}
