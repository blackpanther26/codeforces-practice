#include <iostream>
#include <algorithm> // For std::reverse
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;
        string t =s;
        reverse(t.begin(),t.end());
        cout<<min(s,t+s)<<endl;
    }
    return 0;
}
