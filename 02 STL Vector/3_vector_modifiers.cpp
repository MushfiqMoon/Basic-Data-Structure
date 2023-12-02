#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30};
    vector<int> v = {4, 5, 6};

    // v= or v.assign()
    // Assign another vector.
    // v = x;
    v.assign(x.begin(), x.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // v.pop_back()
    // Remove the last element.
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}