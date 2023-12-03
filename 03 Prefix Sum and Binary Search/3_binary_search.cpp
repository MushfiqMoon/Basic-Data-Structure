#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = length - 1;

    bool isFound = false;

    int x;
    cin >> x;

    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        if (arr[mid_index] == x)
        {
            isFound = true;
            break;
        }
        if (x > arr[mid_index])
        {
            // Go right
            l = mid_index + 1;
        }
        // (x < arr[mid_index])
        else
        {
            r = mid_index - 1;
        }
    }

    if (isFound)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}