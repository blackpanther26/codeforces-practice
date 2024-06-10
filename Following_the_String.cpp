#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unordered_map<char, int> hmap;
        int curr = 97;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cout << char(curr);
                hmap[curr]++;
                curr++;
            }
            else
            {
                for (auto it : hmap)
                {
                    if (it.second == a[i])
                    {
                        cout << char(it.first);
                        hmap[it.first]++;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
}