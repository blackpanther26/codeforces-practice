// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<pair<int, string>> s;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         int no;
//         cin >> str >> no;
//         s.insert({(no*(-1)), str});
//     }
//     for (auto value : s)
//     {
//         cout << value.second << " " << (value.first*(-1)) << endl;
//     }
// }
#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    map<int, multiset<string>> m;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        m[num].insert(s);
    }
    auto cur_it = --m.end();
    while (true)
    {
        auto &std = (*cur_it).second;
        int marks = (*cur_it).first;
        for (auto v : std)
        {
            cout << v << " " << marks << endl;
        }
        if (cur_it == m.begin())
            break;
        cur_it--;
    }
}