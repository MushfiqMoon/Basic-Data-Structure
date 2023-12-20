/*
Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
5
10 20 30 40 50
Sample Output
50 40 30 20 10

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sizeN;
    cin >> sizeN;

    queue<int> qu;

    while (sizeN--)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    queue<int> newQ;

    stack<int> st;

    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }

    while (!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }

    while (!newQ.empty())
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }

    return 0;
}