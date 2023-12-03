/*
Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a single line that contains the summation of all numbers from index L to index R.

Input
First line contains two numbers N, Q (1≤N,Q≤105) where N is number of elements in A and Q is number of query pairs.

Second line contains N numbers(1≤Ai≤109).

Next Q lines contains L,R (1≤L≤R≤N).

Output
For each query Q print a single line that contains the summation of all numbers from index L to index R.

Examples
input
6 3
6 4 2 7 2 7
1 3
3 6
1 6
output
12
18
28
input
4 3
5 5 2 3
1 3
2 3
1 4
output
12
7
15
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, testCase;
    cin >> length >> testCase;

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    while (testCase--)
    {
        int l, r;
        cin >> l >> r;
        // position to index convert
        l--;
        r--;

        int sum = 0;

        for (int i = l; i <= r; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}