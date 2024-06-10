#include <iostream>
#include <set>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("sgcjdh"); // O(log(n)
    s.insert("dhcada");
    s.insert("dcahjv");
    auto it = s.find("sgcjdh"); // O(log(n)
    if (it != s.end())
    {
        cout << (*it) << endl;
    }
    s.erase("dhcada");
    print(s);
}
// sets are similar to map except they have only one key . ie only one element instead if a pair in maps.
// sets give sorted data
//  sets store unique elements , if you do s.insert("abc") and again s.insert("abc") then abc will be inserted only once not again and again.