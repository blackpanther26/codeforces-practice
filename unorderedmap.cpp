#include <iostream>
#include <unordered_map>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";//O(1)
    m[2] = "sdfdv";
    m[4] = "cdsv";
    m.insert({3,"csfv"});
    m[6];
    m.erase(6);
    m.clear();
    auto it = m.find(7); // O(1)
    if(it!=m.end())
    m.erase(it);// O(1)
    if(it==m.end()){
        cout<<"NO VALUE"<<endl;
    }
    else{
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    print(m);
}
// in unordered maps you cant insert any datatype , like pairs or sets , you can use only basic data types like int , double,string etc for which hash value is defined whereas you can use any data type in maps