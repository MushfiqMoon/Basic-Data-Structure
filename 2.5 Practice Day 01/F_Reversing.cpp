/*
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
input
4
5 1 3 2
output
2 3 1 5
input
5
1 2 3 4 5
output
5 4 3 2 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    vector<int> v;
    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

     // Reverse the array using std::reverse
    reverse(v.begin(), v.end());

    for (auto &&i : v)
    {
        cout << i<< " ";
    }
    

    return 0;
}