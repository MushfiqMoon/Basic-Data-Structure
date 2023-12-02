#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1
    // vector<type>v;
    // Construct a vector with 0 elements
    vector<int> v;
    cout << v.size() << endl;

    // type 2
    // vector<type>v(N);
    // Construct a vector with N elements and the value will be `0` or garbage.
    vector<int> v2(5);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "size - " << v2.size() << endl;

    // type 3
    // vector<type>v(N,V);
    // Construct a vector with N elements and the value will be V.
    vector<int> v3(3, 10);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // or

    vector<int> v3_5 = {10, 20, 30, 40, 50};
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v3_5[i] << " ";
    }
    cout << endl;

    // type 4
    // vector<type>v(v2);
    // Construct a vector by copying another vector v2.

    vector<int> v4(v3);
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    cout << "size taking from another vector - " << v4.size() << endl;

    // type 5
    // vector<type>v(A,A+N);
    // Construct a vector by copying all elements from an array A of size N.
    int arr[5] = {5, 4, 3, 2, 1};

    vector<int> v5(arr, arr + 5);
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    return 0;
}