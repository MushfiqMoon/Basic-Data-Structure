/*
       10
     /    \
   /        \
  20        30
 /   \        \
40    90       50
 \       \     / \
  60    100   70  80

input : 10 20 30 40 90 -1 50 -1 60 -1 100 70 80 -1 -1 -1 -1 -1 -1 -1 -1
ans : 10 20 30 40 90 50 60 100 70 80

*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // 1st step
        Node *parentRoot = q.front();
        q.pop();

        // 2nd step
        int left, right;
        cin >> left >> right;

        Node *newLeft;
        Node *newRight;

        if (left == -1)
            newLeft = NULL;
        else
            newLeft = new Node(left);

        if (right == -1)
            newRight = NULL;
        else
            newRight = new Node(right);

        // assigning
        parentRoot->left = newLeft;
        parentRoot->right = newRight;

        // 3rd step
        if (parentRoot->left)
            q.push(parentRoot->left);
        if (parentRoot->right)
            q.push(parentRoot->right);
    }
    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No tree ";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1st step
        Node *f = q.front();
        q.pop();

        // 2nd step
        cout << f->val << " ";

        // 3rd step
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}