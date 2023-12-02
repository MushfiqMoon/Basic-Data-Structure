# Vector Built-in Functions

This document outlines various constructors available for the `vector` data structure in C++.

| Constructor                 | Details                                        | Time Complexity |
|-----------------------------|------------------------------------------------|-----------------|
| `vector<type>v;`            | Construct a vector with 0 elements.            | O(1)            |
| `vector<type>v(N);`         | Construct a vector with `N` elements, initialized with garbage values. | O(N) |
| `vector<type>v(N, V);`      | Construct a vector with `N` elements, initialized with value `V`. | O(N) |
| `vector<type>v(v2);`        | Construct a vector by copying another vector `v2`. | O(N) |
| `vector<type>v(A, A + N);`  | Construct a vector by copying all elements from an array `A` of size `N`. | O(N) |

Note: Replace `type` with the desired data type (e.g., `int`, `double`, etc.) when using these constructors.

# Vector Capacity Functions

This document outlines various functions related to the capacity management of the `vector` data structure in C++.

| Function            | Details                                                      | Time Complexity |
|---------------------|--------------------------------------------------------------|-----------------|
| `v.size()`          | Returns the size of the vector.                               | O(1)            |
| `v.max_size()`      | Returns the maximum size that the vector can hold.            | O(1)            |
| `v.capacity()`      | Returns the current available capacity of the vector.          | O(1)            |
| `v.clear()`         | Clears the vector elements. Does not delete memory, only clears values. | O(N)       |
| `v.empty()`         | Returns true/false if the vector is empty or not.              | O(1)            |
| `v.resize()`        | Changes the size of the vector.                                | O(K); K = new size - current size |

Note: Replace `v` with the name of your vector instance.

# Vector Modifiers

This section details various modifiers available for the `vector` data structure in C++.

| Modifier                                      | Details                                                      | Time Complexity |
|-----------------------------------------------|--------------------------------------------------------------|-----------------|
| `v =` or `v.assign()`                         | Assigns another vector to the vector `v`.                     | O(N) if sizes are different, O(1) otherwise. |
| `v.push_back()`                               | Adds an element to the end of the vector.                      | O(1)            |
| `v.pop_back()`                                | Removes the last element from the vector.                      | O(1)            |
| `v.insert()`                                  | Inserts elements at a specific position in the vector.         | O(N+K); K = number of elements to be inserted. |
| `v.erase()`                                   | Deletes elements from a specific position in the vector.       | O(N+K); K = number of elements to be deleted. |

Additionally, these functions are not directly associated with the vector but are often used in conjunction with vectors:

- `replace(v.begin(), v.end(), value, replace_value)`: Replaces all occurrences of `value` with `replace_value` in a range. Not specific to a vector.
  - Time Complexity: O(N)
- `find(v.begin(), v.end(), V)`: Finds the value `V` in a range. Not specific to a vector.
  - Time Complexity: O(N)

Note: Replace `v` with the name of your vector instance.

# Vector Element Access

This section details various methods for accessing elements in the `vector` data structure in C++.

| Method        | Details                            | Time Complexity |
|---------------|------------------------------------|-----------------|
| `v[i]`        | Access the element at index `i`.    | O(1)            |
| `v.at(i)`     | Access the element at index `i`.    | O(1)            |
| `v.back()`    | Access the last element in the vector. | O(1)         |
| `v.front()`   | Access the first element in the vector. | O(1)         |

Note: Replace `v` with the name of your vector instance.

# Vector Iterators

This section outlines iterators available for the `vector` data structure in C++.

| Iterator     | Details                           | Time Complexity |
|--------------|-----------------------------------|-----------------|
| `v.begin()`  | Pointer to the first element.     | O(1)            |
| `v.end()`    | Pointer to the element after the last element. | O(1)  |

Note: Replace `v` with the name of your vector instance.

## Additional Information

For more information and detailed usage examples, please refer to the [C++ Standard Library documentation for vectors](https://en.cppreference.com/w/cpp/container/vector).
