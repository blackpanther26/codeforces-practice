#include <iostream>
#include <vector>
using namespace std;
vector<string> valid;
void generate(string &s, int open, int close)
{
    cout << "string now " << s << endl;
    if (open == 0 && close == 0)
    {
        valid.push_back(s);
        cout << "valid string " << s << endl;
        return;
    }
    if (open > 0)
    {
        s.push_back('(');
        cout << "after push back in open > 0 " << s << endl;
        generate(s, open - 1, close);
        cout << "before pop back in open > 0 " << s << endl;
        s.pop_back();
        cout << "after pop back in open > 0 " << s << endl;
    }
    if (close > 0 && open < close)
    {
        s.push_back(')');
        cout << "after push back in close > 0 " << s << endl;
        generate(s, open, close - 1);
        cout << "before pop back in close > 0 " << s << endl;
        s.pop_back();
        cout << "after pop back in close > 0 " << s << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    string s;
    generate(s, n, n);
    for (auto ele : valid)
    {
        cout << ele << endl;
    }
}