#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n];
    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0, taxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == '1')
            ct1++;
        else if (a[i] == '2')
            ct2++;
        else if (a[i] == '3')
            ct3++;
        else
            ct4++;
    }
    taxi += ct4;
    taxi += ct3;
    ct1 -= ct3;
    if (ct1 < 0)
        ct1 = 0;
    if (ct2 % 2 == 0)
    {
        ct2 /= 2;
        taxi += ct2;
    }
    else
    {
        ct2 = ct2 / 2 + 1;
        taxi += ct2;
        ct1 -= 2;
        if (ct1 < 0)
            ct1 = 0;
    }
    ct1 = ceil(ct1 / 4.0);
    taxi += ct1;
    cout << taxi;
    return 0;
}