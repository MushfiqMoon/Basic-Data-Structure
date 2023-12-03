/*
Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
.

Second line contains N
 numbers (1≤Ai≤109)
.

Next Q
 lines contains X
 (1≤X≤109)
.

Output
Print the answer for each query in a single line.

Example
input
5 3
1 5 4 3 2
5
3
6
output
found
found
not found
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
    sort(arr, arr + length);

    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }

    while (testCase--)
    {
        int x;
        cin >> x;
        bool isFound = false;

        int l = 0, r = length - 1;

        // binary search apply
        while (l <= r)
        {
            int mid_index = (l + r) / 2;

            if (x == arr[mid_index])
            {
                isFound = true;
                break;
            }
            if (x < arr[mid_index])
            {
                r = mid_index - 1;
            }
            else
            {
                l = mid_index + 1;
            }
        }

        if (isFound)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}