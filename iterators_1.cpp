#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {2, 4, 6, 7, 8};
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<pair<int,int> > v_p = {{2, 2}, {3, 3}, {4, 4}};
    vector<pair<int,int> > :: iterator it;
    for (it=v_p.begin(); it != v_p.end() ; ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it=v_p.begin();it!=v_p.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    
}
// run using cd "/Users/priyanshuchahal/Desktop/practice/" && g++ -std=c++11 iterators_1.cpp -o iterators_1 && "/Users/priyanshuchahal/Desktop/practice/"iterators_1
