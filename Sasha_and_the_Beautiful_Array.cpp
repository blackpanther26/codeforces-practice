#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin>>n;
        long a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int sum =0;
        for (size_t i = 0; i < n-1; i++)
        {
            int diff = a[i+1]-a[i];
            sum+=diff;
        }
        cout<<sum<<endl;
    }
}