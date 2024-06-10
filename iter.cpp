#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2, 4, 6, 7, 8}; 
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<pair<int, int> > v_p = {{2, 2}, {3, 3}, {4, 4}}; 
    for(auto it = v_p.begin(); it!= v_p.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    for (auto &value : v_p)
    {
        value.first++;
        cout << value.first <<endl;
    }
    
}
// works with c++11 : cd "/Users/priyanshuchahal/Desktop/practice/" && g++ -std=c++11 iter.cpp -o iter && "/Users/priyanshuchahal/Desktop/practice/"iter
