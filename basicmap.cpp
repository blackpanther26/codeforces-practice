#include <iostream>
#include <map>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";//logn
    m[2] = "sdfdv";
    m[4] = "cdsv";
    m.insert({3,"csfv"});
    m[6];
    m.erase(6);
    m.clear();
    auto it = m.find(7);
    if(it!=m.end())
    m.erase(it);
    if(it==m.end()){
        cout<<"NO VALUE"<<endl;
    }
    else{
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    print(m);
}