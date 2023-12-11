/*
Question: Take two doubly linked lists as input and check if they are the same or not.

Sample Input
10 20 30 40 50 -1
10 20 30 40 50 -1
Sample Output
YES

Sample Input
10 20 30 40 -1
10 20 30 40 50 -1
Sample Output
NO
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = tail->next;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
            break;

        insert_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;

    while (true)
    {
        cin >> val2;

        if (val2 == -1)
            break;

        insert_tail(head2, tail2, val2);
    }

    bool isEqual = true;

    int lengthofFirst = size(head1);
    int lengthofSecond = size(head2);

    if (lengthofFirst != lengthofSecond)
    {
        isEqual = false;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            isEqual = false;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    if (isEqual)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // print_normal(head1);
    // print_reverse(tail2);

    return 0;
}