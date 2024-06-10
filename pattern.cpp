#include<iostream>
using namespace std;
int main(){
    int n ,c=1,g=1;
    cin>>n;
    for (int i = n; i >0 ; --i)
    {
        for (int k = n; k >=i; --k)
        {
            cout<<k;
        }
        for(int j = 2*n-2*c;j>0;j--){
            cout<<i;
        }
        for (int k = i+1; k <=n ; ++k)
        {
            cout<<k;
        }
        c++;
        cout<<endl;
    }
    for(int i = 2;i<=n;i++){
        for (int j = n;j>=i;j--){
            cout<<j;
        }
        for(int j = 2*g;j>0;j--){
            cout<<i;
        }
        for (int k = i+1; k <=n ; ++k)
        {
            cout<<k;
        }
        g++;
        cout<<endl;
    }
    return 0;
}