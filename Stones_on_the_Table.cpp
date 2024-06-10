#include <iostream>
using namespace std;
int main()
{
    int n, ct = 0;
    cin >> n;
    char a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n - 1; i++)
    {
        if (a[i + 1] == a[i])
        {
            ct++;
        }
    }
    if (ct > 0)
    {
        cout << ct;
    }
    else
        cout << 0;
}