#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    // Ensure both strings are of equal length by padding the shorter one
    size_t len1 = s1.length();
    size_t len2 = s2.length();
    if (len1 < len2) {
        s1.append(len2 - len1, ' '); // Pad with spaces
    } else if (len1 > len2) {
        s2.append(len1 - len2, ' '); // Pad with spaces
    }

    int ans = 0;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (size_t i = 0; i < s1.size(); i++) { // Use size() instead of fixed 100
        if (s1[i] < s2[i]) {
            ans = -1;
            break;
        } else if (s1[i] > s2[i]) {
            ans = 1;
            break;
        }
    }

    cout << ans;
    return 0;
}
