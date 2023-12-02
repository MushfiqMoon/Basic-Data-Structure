#include <bits/stdc++.h>
using namespace std;

int main()
{
    // replace(v.begin(),v.end(),value,replace_value)
    // Replace all the value with replace_value. Not under a vector.

    vector<int> v = {1, 25, 4, 8, 4, 6, 5, 6, 48, 4, 54, 5, 4, 54, 6, 4, 6, 48, 4, 7};

    // single value
    replace(v.begin(), v.end(), 48, 1000);

    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}