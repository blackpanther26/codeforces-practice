#include <iostream>
using namespace std;
int main()
{
    int n, k, ct = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kvalue = a[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= kvalue && a[i] != 0)
        {
            ct++;
        }
    }
    cout << ct;
}