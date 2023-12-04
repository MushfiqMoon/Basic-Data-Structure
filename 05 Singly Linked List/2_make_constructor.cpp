#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int _val)
    {
        this->val = _val;
        this->next = NULL;
    }
};

int main()
{
    // creating two node
    Node a(30);
    Node b(20);
    Node c(10);

    // a.val = 10;
    // b.val = 20;
    // c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << "direct a -> " << a.val << endl;
    cout << "direct b -> " << b.val << endl;
    // OR
    cout << "from a to b with pointer longway-> " << (*a.next).val << endl;
    cout << "from a to b -> " << a.next->val << endl;

    cout << "direct c -> " << c.val << endl;
    // OR
    cout << "from a to c -> " << a.next->next->val << endl;
    return 0;
}