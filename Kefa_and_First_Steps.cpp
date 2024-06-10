#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long a[n];
    long c = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i])
        {
            c1++;
        }
        else
        {
            c = max(c1, c);
            c1 = 0;
        }
    }
    c = max(c1, c);
    cout << c + 1;
}