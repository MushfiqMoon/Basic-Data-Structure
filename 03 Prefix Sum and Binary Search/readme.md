# Array and Prefix Sum Array

## Array
| Index | Value |
|-------|-------|
|   0   |   3   |
|   1   |   5   |
|   2   |   2   |
|   3   |   6   |
|   4   |   2   |
|   5   |   1   |

## Prefix Sum Array
| Index | Prefix Sum |
|-------|------------|
|   0   |     3      |
|   1   |     8      |
|   2   |     10     |
|   3   |     16     |
|   4   |     18     |
|   5   |     19     |

## Formula for Prefix Sum Calculation
The formula for calculating the prefix sum at index \(i\) is:

\[ \text{prefixSum}[i] = \sum_{j=0}^{i} \text{arr}[j] \]

Additionally, an alternative method to calculate the prefix sum for index \(i\) is:

\[ \text{prefixSum}[i] = \text{arr}[i] + \text{prefixSum}[i - 1] \]


## Generating Prefix Sum Array
To generate the prefix sum array `pre` from the given array `arr`, the following code snippet can be used in C++:

```cpp
// Given array 'arr'
int arr[] = {3, 5, 2, 6, 2, 1};
int length = sizeof(arr) / sizeof(arr[0]);

// prefixSum array
int pre[length];
pre[0] = arr[0];
for (int i = 1; i < length; i++) {
    pre[i] = arr[i] + pre[i - 1];
}
```
