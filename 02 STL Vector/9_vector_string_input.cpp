#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;

    vector<string> v;
    for (int i = 0; i < length; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // OR

    // vector<string> v(length);
    // for (int i = 0; i < length; i++)
    // {
    //     getline(cin, v[i]);
    // }

    for (auto &&val : v)
    {
        cout << val << endl;
    }

    return 0;
}