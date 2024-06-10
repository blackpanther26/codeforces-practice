#include <iostream>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N]; // global arrays have larger size and are by default intialized to zero
int main()
{
    int n, m;
    cin>>n>>m;
    while(m--){
        int a , b ,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;
    }
    for (int i = 1; i < n+1; i++)
    ar[i]+=ar[i-1];
    long long mx=-1;
    for (int i = 1; i < n+1; i++)
    {
        if (mx<ar[i])
            mx=ar[i];
    }
    cout<<mx<<endl;   
}