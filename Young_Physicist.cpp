#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        x += a[i][0];
        y += a[i][1];
        z += a[i][2];
    }
    // cout << "x " << x << " y " << y << " z " << z;
    if (x + y + z == 0 && ((x * x == ((y * y) + (z * z))) || (y * y == ((x * x) + (z * z))) || (z * z == ((y * y) + (x * x)))))
        cout << "YES";
    else
        cout << "NO";
}