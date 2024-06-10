#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> s;
    s.push(5);
    s.push(13);
    s.push(45);
    s.push(23);
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }
}