#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<long long> bags;
        for (int i = 0; i < n ; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        for (int i = 0; i < m ; i++)
        {
            long long candy_ct;
            cin >> candy_ct;
            auto it = bags.find(candy_ct);
            if (it!=bags.end())
            {
                cout<<"YES"<<endl;
            }
            else
            cout << "NO"<<endl;  
            bags.insert(candy_ct);
        }
    }
}