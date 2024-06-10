#include <iostream>
#include <cctype> // Include for toupper() and islower()
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (!islower(s[0])) // Check if the first character is not lowercase
    {
        cout << s;
    }
    else
    {
        char n = toupper(s[0]); // Convert the first character to uppercase
        cout << n;
        for (int i = 1; i < s.length(); i++) // Iterate through the rest of the string
        {
            cout << s[i];
        }
    }
    return 0;
}
