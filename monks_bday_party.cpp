#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        set<string> s;
        for (int i = 0; i < n ; i++)
        {
            string st;
            cin>>st;
            s.insert(st);
        }
        for (auto value : s)
        {
            cout << value << endl;
        }    
    }
}