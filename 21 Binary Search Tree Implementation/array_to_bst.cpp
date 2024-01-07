/*
        8
       / \
     2    15
      \   / \
      5  12 19

Input : 
6
2 5 8 12 15 19

out put 
8 2 15 5 12 19 
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

Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;

    int mid = (l + r) / 2;

    Node *root = new Node(a[mid]);
    Node *rootLeft = convert(a, n, l, mid - 1);
    Node *rootRight = convert(a, n,  mid + 1, r);

    root->left = rootLeft;
    root->right = rootRight;
    return root;
}

void level_order(Node *root)
{
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
    int arrLength;
    cin >> arrLength;

    int arr[arrLength];

    for (int i = 0; i < arrLength; i++)
        cin >> arr[i];
    // array, size, first index, last index
    Node *root = convert(arr, arrLength, 0, arrLength - 1);

    level_order(root);

    return 0;
}