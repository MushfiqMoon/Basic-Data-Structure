#include <bits/stdc++.h>
using namespace std;

// void fun(int *p)
// {
//     *p = 10;

//     cout << "from fn showing value only " << *p << endl;
//     cout << "from fn showing address " << &p << endl;
// }

// if we get the parameter as address
void fun2(int *&p)
{
    p = NULL;

    cout << "== == ==" << endl;
    cout << "from fn2 showing address " << &p << endl;
    cout << "== == ==" << endl;
}

int main()
{
    int val = 10;
    //  on this ptr variable we are storing the address of val
    int *ptr = &val;
    cout << val << endl;

    // fun(ptr);
    // cout << "value only " << val << endl;
    // cout << "showing address " << &ptr << endl;
    fun2(ptr);
    cout << "== == ==" << endl;
    cout << "value only " << val << endl;
    cout << "showing address " << &ptr << endl;
    cout << "== == ==" << endl;
    return 0;
}