#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int diag = (n * 2 - 1) * 2;
        if (k == diag)
            cout << n * 2 << endl;
        else if (k % 2 == 0)
            cout << k / 2 << endl;
        else
            cout << k / 2 + 1 << endl;
    }
    return 0;
}
