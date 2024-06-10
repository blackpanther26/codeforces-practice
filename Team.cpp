#include <iostream>
using namespace std;
int main(){
    int n,ct=0;
    cin>>n;
    while (n--)
    {
        bool a[3];
        int count =0;
        cin>>a[0]>>a[1]>>a[2];
        for (int i = 0; i < 3; i++)
        {
            if(a[i]==1)
            count++;
        }
        if (count>1)
            ct++; 
    }
    cout<<ct;
}