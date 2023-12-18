/*
Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

Sample Input
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output
YES

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
NO
*/

#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    int size;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int sz()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty() ? true : false;
    }
};

int main()
{
    int stack_one_size, stack_two_size;

    myStack stOne, stTwo;

    cin >> stack_one_size;

    for (int i = 0; i < stack_one_size; i++)
    {
        int val;
        cin >> val;
        stOne.push(val);
    }

    cin >> stack_two_size;

    for (int i = 0; i < stack_two_size; i++)
    {
        int val;
        cin >> val;
        stTwo.push(val);
    }

    bool isSame = true;

    if (stOne.sz() != stTwo.sz())
    {
        isSame = false;
    }
    else
    {
        while (!stOne.empty())
        {
            if (stOne.top() != stTwo.top())
            {
                isSame = false;
                break;
            }
            stOne.pop();
            stTwo.pop();
        }
    }

    if (isSame)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}