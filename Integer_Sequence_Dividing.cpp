#include<iostream>
using namespace std;
int main(){
    long long int n,sum=0;
    cin>>n;
    sum=(n*(n+1))/2;
    if (sum %2==0){
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}