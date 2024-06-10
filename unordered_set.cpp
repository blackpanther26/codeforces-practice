/*
Given N strings and Q queries. In each query you are given a string .
Print yes if the string is present else print no.
N <= 10^6
|S| <= 100
Q <= 10^6
*/

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        s.insert(st);
    }
    int g;
    cin>>g;
    while(g--){
        string st;
        cin>>st;
        if(s.find(st)==s.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}
