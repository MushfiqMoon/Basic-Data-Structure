/*
Given two arrays A
 and B
 of size N
. Print a new array C
 that holds the concatenation of array B
 followed by array A
.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
.

Second line will contain N
 numbers (1≤Ai≤105)
 array A
 elements.

Third line will contain N
 numbers (1≤Bi≤105)
 array B
 elements.

Output
Print array C
 elements separated by space.

Example
input
2
1 2
3 4
output
3 4 1 2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;

    vector<int> v;
    vector<int> v2;

    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }

    v2.insert(v2.end(), v.begin(), v.end());

    for (auto &&val : v2)
    {
        cout << val << " ";
    }

    return 0;
}