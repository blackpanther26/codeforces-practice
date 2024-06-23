#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 9;
    int i = 3;
    if ((a & (1 << i)) != 0)
    {
        cout << "set bit \n";
    }
    else
        cout << " bit not set \n ";
    // bits count
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((a & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout << ct << endl;
    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll((1LL << 35) - 1) << endl;
    if (1 & a)
        cout << "odd\n";
    else
        cout << "even\n";
    // multipy by 2
    cout << (a << 1) << endl;
    // divide by 2 (quotient only)
    cout << (a >> 1) << endl;
    // uppercase to lower case
    char B = 'B';
    char ch = B | (1 << 5);
    cout << ch << endl;
    // lower to upper
    cout << char(ch & ~(1 << 5)) << endl;
    cout << char(1 << 5) << endl; // this is equal to space , so we can or with space to get lowercase
    // upper to lower (not valid for lower to upper)
    cout << char('C' | ' ') << endl;
    // lower to upper
    cout << char('z' & '_') << endl;
    // clear lsb
    int c = 59;
    int j = 4;
    int ans = (c & (~((1 << i + 1) - 1)));
    cout << ans << endl;
    // logic :
    // 00000111011 // 59 in binary
    // 11111100000 // to remove bits till 4th bit , we need this number
    // 00000011111 // thats hard to find , so we take this number
    // 00000100000 - 1 // the above number can also be written like this

    // clear msb
    int msb = (c & ((1 << i + 1) - 1));
    cout << msb << endl;

    // to check power of 2
    int n = 15;
    if (n & (n - 1))
    {
        cout << "not power of 2" << endl;
    }
    else
    {
        cout << "power of 2" << endl;
    }
}
// ith bit
// how to set bit ?
// (a | (1<<i))
// how to unset a bit
// ( a &~(1<<i))
// how to toggle a bit
// ( a^(1<<i))
