# C++ Arrays and Loops Combined - Processing Multiple Values

This explains how to use loops with arrays to handle multiple pieces of data efficiently.

---

## Your Code: [`arrayAndLoopCombined.cpp`](arrayAndLoopCombined.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Breaking Down the Code

### 1. Array Declaration:

```cpp
int n = 5;      // Size of array
int arr[n];     // Array that can hold 5 integers
```

### 2. Input Loop:

```cpp
for (int i = 0; i < n; i++)
{
    cin >> arr[i];  // Read value into arr[0], arr[1], arr[2], arr[3], arr[4]
}
```

**What happens:**

- `i = 0`: Read into `arr[0]`
- `i = 1`: Read into `arr[1]`
- `i = 2`: Read into `arr[2]`
- `i = 3`: Read into `arr[3]`
- `i = 4`: Read into `arr[4]`

### 3. Output Loop:

```cpp
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";  // Print arr[0], arr[1], arr[2], arr[3], arr[4]
}
```

**What happens:**

- `i = 0`: Print `arr[0]` and a space
- `i = 1`: Print `arr[1]` and a space
- `i = 2`: Print `arr[2]` and a space
- `i = 3`: Print `arr[3]` and a space
- `i = 4`: Print `arr[4]` and a space

## How It Works - Step by Step

### Example Input: `10 20 30 40 50`

**Input Loop:**
| Loop | i | Action | Array State |
|------|---|--------|-------------|
| 1 | 0 | `cin >> arr[0]` → 10 | `[10, ?, ?, ?, ?]` |
| 2 | 1 | `cin >> arr[1]` → 20 | `[10, 20, ?, ?, ?]` |
| 3 | 2 | `cin >> arr[2]` → 30 | `[10, 20, 30, ?, ?]` |
| 4 | 3 | `cin >> arr[3]` → 40 | `[10, 20, 30, 40, ?]` |
| 5 | 4 | `cin >> arr[4]` → 50 | `[10, 20, 30, 40, 50]` |

**Output Loop:**
| Loop | i | Action | Output |
|------|---|--------|---------|
| 1 | 0 | `cout << arr[0]` | `10 ` |
| 2 | 1 | `cout << arr[1]` | `20 ` |
| 3 | 2 | `cout << arr[2]` | `30 ` |
| 4 | 3 | `cout << arr[3]` | `40 ` |
| 5 | 4 | `cout << arr[4]` | `50 ` |

**Final Output:** `10 20 30 40 50 `

## Why Use Loops with Arrays?

### Without Loops (tedious):

```cpp
// Input
cin >> arr[0];
cin >> arr[1];
cin >> arr[2];
cin >> arr[3];
cin >> arr[4];

// Output
cout << arr[0] << " ";
cout << arr[1] << " ";
cout << arr[2] << " ";
cout << arr[3] << " ";
cout << arr[4] << " ";
```

### With Loops (efficient):

```cpp
// Input
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

// Output
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
```

## Benefits of Arrays + Loops

1. **Less Code**: Write once, works for any size array
2. **Flexible**: Change `n` to handle different array sizes
3. **Scalable**: Works for 5 elements or 5000 elements
4. **Maintainable**: Easy to modify the processing logic

## Common Pattern

This is a very common programming pattern:

```cpp
// 1. Declare array
int arr[size];

// 2. Input loop - fill the array
for (int i = 0; i < size; i++) {
    cin >> arr[i];
}

// 3. Process loop - do something with array
for (int i = 0; i < size; i++) {
    // Process arr[i]
}

// 4. Output loop - display results
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
```

You'll use this pattern very often when working with collections of data!
