#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(13);
    s.push(45);
    s.push(23);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}