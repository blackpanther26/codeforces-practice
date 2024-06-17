#include <bits/stdc++.h>
using namespace std;

int divisibleBy()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int count2 = 0, temp2 = 0, oper = 0;
    bool flag = false;
    vector<int> v;

    // Finding how many 2s are present in the array initially
    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            count2 += 1;
            arr[i] = arr[i] / 2;
        }
    }

    // Finding how many 2s we can get by performing n operations
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp % 2 == 0)
        {
            temp2 += 1;
            temp = temp / 2;
        }
        if (temp2 > 0)
        {
            v.push_back(temp2);
        }
        temp2 = 0;
    }

    // Sort the vector in decreasing order, because we need maximum 2s by performing minimum operations
    sort(v.begin(), v.end(), greater<int>());

    // Iterate the vector of how many 2s are present at a particular index
    for (int i = 0; i < v.size(); i++)
    {
        // After performing some operation, the product of the array is divisible by 2^n
        if (count2 >= n)
        {
            flag = true;
            break;
        }
        // Perform operation & add 2s present at that index
        else
        {
            count2 += v[i];
            oper += 1;
        }
    }

    // If product of array is divisible by 2^n Then return operation required
    if (flag || count2 >= n)
    {
        return oper;
    }

    // If product of array is not divisible by 2^n Then return -1
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<divisibleBy()<<endl;
    }
}
