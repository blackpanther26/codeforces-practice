#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int s1[n];
    s1[0] = a[0];
    int s=a[0];
    for (int i = 1; i < n; i++)
    {
        s1[i] = s1[i - 1] + a[i];
        s+=a[i];
    }
    int s2[n];
    s2[0] = a[n - 1];
    for (int i = 1; i < n; i++)
    {
        s2[i] = s2[i - 1] + a[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s2[i] > s1[i] && ((s2[i]>s-s2[i])))
        {
            cout << i + 1;
            return 0;
        }
    }
    bool flag=true;
    for (int i = 1; i < n; i++)
    {
        if (a[i]!=a[i-1])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout<<n/2+1;
        return 0;
    }
    cout << n;
}
