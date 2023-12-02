#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    vector<int> v(length);

    for (int i = 0; i < length; i++)
    {
        cin >> v[i];
    }

    for (auto &&val : v)
    {
        cout << val << " "; 
    }
    
    
    return 0;
}