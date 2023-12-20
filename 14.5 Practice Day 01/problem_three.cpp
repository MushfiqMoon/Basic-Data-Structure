/*
Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

Sample Input
5
10 20 30 40 50

Sample Output
10 20 30 40 50

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sizeN;
    stack<int> st;

    cin >> sizeN;
    while (sizeN--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int> newSt;

    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }

    while (!newSt.empty())
    {
        cout << newSt.top() << " ";
        newSt.pop();
    }

    return 0;
}