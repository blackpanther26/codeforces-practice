#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it=(--bags.end());
            long long candy_ct=*last_it;
            total_candies+=candy_ct;
            bags.erase(last_it); // dont use bags.erase(candy_ct) coz isse saare values delete ho jaaenge isliye humesha use iterator as isse sirf vo hi value erase hoga
            bags.insert(candy_ct/2);
        }
        cout<<total_candies<<endl;
    }
}