#include <bits/stdc++.h>
using namespace std;

int main()
{
    // v.size()
    // Returns the size of the vector.
    vector<int> v;
    cout << v.size() << endl;
    // v.max_size()
    // Returns the maximum size that the vector can hold.
    cout << v.max_size() << endl;
    // v.capacity()
    // Returns the current available capacity of the vector.
    cout << v.capacity() << endl;

    // v.push_back()
    // Add an element to the end.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    // v.clear()
    // Clears the vector elements.
    v.clear();
    cout << v.size() << endl;
    // Do not delete the memory, only clear the value.
    cout << v[2] << endl;

    // v.resize()
    // Change the size of the vector.
    vector<int> v2 = {1, 2, 3};
    v2.resize(2);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // v2.resize(7);            //put all the other values 0 or garbage 
    v2.resize(7,10);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}