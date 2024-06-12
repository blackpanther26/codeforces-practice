#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    long long total_time = 0;
    int current_house = 1;

    for (int i = 0; i < m; i++)
    {
        if (a[i] >= current_house)
        {
            total_time += a[i] - current_house;
        }
        else
        {
            total_time += (n - current_house) + a[i];
        }
        current_house = a[i];
    }

    cout << total_time << endl;
    return 0;
}
