#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int power_of_two_in_product = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            int temp = a[i];
            while (temp % 2 == 0)
            {
                power_of_two_in_product++;
                temp /= 2;
            }
        }
        if (power_of_two_in_product >= n)
        {
            cout << "0\n";
        }
        else
        {
            int needed_twos = n - power_of_two_in_product;
            bool conditionMet = false;
            for (int i = 1; i <= n; i += 2)
            {
                if ((needed_twos) * 2 <= i)
                {
                    cout << 1 << endl;
                    conditionMet = true;
                    break;
                }
            }

            if (conditionMet)
                continue;

            int c = 0;
            for (int i = 2; i <= n; i += 2)
            {
                c++;
                int temp = i;
                while (temp % 2 == 0)
                {
                    needed_twos--;
                    temp /= 2;
                }
                if (needed_twos <= 0)
                {
                    cout << c << "\n";
                    break;
                }
            }
            if (needed_twos > 0)
            {
                cout << "-1\n";
            }
        }
    }
    return 0;
}