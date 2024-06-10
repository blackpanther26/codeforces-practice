#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
    int sum = accumulate(v.begin(), v.end(), 0); // here 0 is the initial value of sum
    cout << sum << endl;
    int ct = count(v.begin(), v.end(), 3); // here 3 is the number of which you have to find the count
    cout << ct << endl;
    // int element = *find(v.begin(),v.end(),2);
    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "Element not found \n";
    reverse(v.begin(), v.end());
    for (auto val : v)
        cout << val << " ";
    cout << endl;
    // lambda function
    auto lambdasum = [](int x, int v)
    { return x + v; };
    cout << lambdasum(3, 4) << endl;
    // cout << [](int x, int v){return x+v;}(3,4); << endl;
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; });
    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 4; });
    cout << none_of(v.begin(), v.end(), [](int x)
                    { return x < 0; });
    // you can either pass lambda function or the function name according to which you want to test the conditon
    // all_of , none_of , any_of return boolean values i.e. 1 or 0;
}
// in the above functions it is not necessary to pass v.begin() and v.end() only , you have to pass the starting index of the element from where you want to pass like : v.begin()+3 , etc and same for the ending element