#include <bits/stdc++.h>
using namespace std;

int main()
{
    // v.erase()
    // Delete elements from a specific position.

    vector<int> v = {1, 2, 3, 4, 5, 6};

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.erase(v.begin() + 2, v.begin() + 3);

    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}