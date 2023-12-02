#include <bits/stdc++.h>
using namespace std;

int main()
{
    // find(v.begin(),v.end(),V)
    // Find the value V. Not under a vector.
    vector<int> v = {1, 25, 4, 8, 4, 6, 5, 6, 48, 4, 54, 5, 4, 54, 6, 4, 6, 48, 4, 7};

    auto it = find(v.begin(), v.end(), 101);

    it == v.end() ? cout << "not found" : cout << "found" << endl;

    return 0;
}