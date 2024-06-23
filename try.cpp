#include <bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    if (n == 0)
        return "0";
    string binary = "";
    while (n > 0)
    {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}
int main()
{ // 1 3 2 5
    cout << "M12 " << (1 | 3) << endl;
    cout << "M13 " << (1 | 3) << endl;
    cout << "M14 " << (1 | 5) << endl;
    cout << "M23 " << (3 | 3) << endl;
    cout << "M24 " << (3 | 5) << endl;
    cout << "M34 " << (3 | 5) << endl;
    for (int i = 1; i <= 10; ++i)
    {
        cout << "Binary of " << i << " is " << toBinary(i) << endl;
    }
}
