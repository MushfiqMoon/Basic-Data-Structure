#include <bits/stdc++.h>
using namespace std;

int main()
{
    // v.insert()
    // Insert elements at a specific position.
    vector<int> v = {1, 2, 3, 4, 5};

    // single value
    v.insert(v.begin() + 2, 34);

    // multiple value
    vector<int> x = {100, 200, 300};
    v.insert(v.begin() + v.size() - 1, x.begin(), x.end());

    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}