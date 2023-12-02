#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    cin.ignore();
    vector<string> v(length);


    for (int i = 0; i < length; i++)
    {
        getline(cin, v[i]);
    }

    for (auto &&val : v)
    {
        cout << val << endl;
    }

    return 0;
}