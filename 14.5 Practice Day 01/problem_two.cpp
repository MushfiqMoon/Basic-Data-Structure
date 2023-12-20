/*
    Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

    Sample Input
    5
    10 20 30 40 50
    5
    10 20 30 40 50
    Sample Output
    NO

    Sample Input
    5
    10 20 30 40 50
    4
    10 20 30 40
    Sample Output
    NO

    Sample Input
    5
    10 20 30 40 50
    5
    50 40 30 20 10

    Sample Output
    YES

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stackN, queueM;

    cin >> stackN;

    stack<int> st;

    while (stackN--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    cin >> queueM;

    queue<int> qu;

    while (queueM--)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    bool isSame = true;

    if (st.size() != qu.size())
    {
        isSame = false;
    }
    else
    {
        while (!st.empty() && !qu.empty())
        {
            if (st.top() != qu.front())
            {
                isSame = false;
                break;
            }
            st.pop();
            qu.pop();
        }
    }

    if (isSame)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}