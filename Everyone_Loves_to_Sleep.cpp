#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        int time = 60 * H + M;
        int ans = 24 * 60;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            int t = (60 * h + m) - time;
            if (t < 0)
            {
                t += 24 * 60;
            }
            ans = min(ans, t);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
}