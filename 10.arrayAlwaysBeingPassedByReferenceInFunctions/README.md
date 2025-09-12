# C++ Arrays Passed to Functions - Important Behavior

This explains how arrays behave differently when passed to functions compared to regular variables.

---

## Your Code: [`arrayAlwaysBeingPassedByReferenceInFunctions.cpp`](arrayAlwaysBeingPassedByReferenceInFunctions.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int doSomething(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int result = arr[i] += 100;
        cout << result << " ";
    }

    return 0;
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
```

## Key Discovery: Arrays are Always Passed by Reference!

### Function Definition:

```cpp
int doSomething(int arr[], int n)  // No '&' needed - arrays are automatically by reference!
```

### What This Means:

- When you pass an array to a function, you're NOT making a copy
- The function works with the **original array**
- Any changes made inside the function affect the original array

## How Your Code Works

### Input Phase (in main):

```cpp
for (int i = 0; i < n; i++)
{
    cin >> arr[i];  // Fill array with user input
}
```

### Function Call:

```cpp
doSomething(arr, n);  // Pass array to function
```

### Inside Function:

```cpp
for (int i = 0; i < n; i++)
{
    int result = arr[i] += 100;  // Add 100 to each element AND modify original
    cout << result << " ";       // Print the new value
}
```

**Important:** `arr[i] += 100` does two things:

1. Adds 100 to the current value
2. Stores the result back in the original array

### Back in Main:

```cpp
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";  // Print modified array
}
```

## Example Run

**Input:** `10 20 30 40 50`

**Step by Step:**

1. **After input:** Array = `[10, 20, 30, 40, 50]`
2. **Function call:** `doSomething(arr, n)`
3. **Inside function:**
   - `arr[0] += 100` → `10 + 100 = 110`, print `110`
   - `arr[1] += 100` → `20 + 100 = 120`, print `120`
   - `arr[2] += 100` → `30 + 100 = 130`, print `130`
   - `arr[3] += 100` → `40 + 100 = 140`, print `140`
   - `arr[4] += 100` → `50 + 100 = 150`, print `150`
4. **Array is now:** `[110, 120, 130, 140, 150]`
5. **Back in main:** Print the modified array

**Output:**

```
110 120 130 140 150

110 120 130 140 150
```

## Why Arrays Behave This Way

### Regular Variables vs Arrays:

**Regular Variable (pass by value):**

```cpp
void changeNumber(int x) {
    x = 999;  // Only changes the copy
}

int num = 5;
changeNumber(num);
cout << num;  // Still prints 5
```

**Array (always pass by reference):**

```cpp
void changeArray(int arr[]) {
    arr[0] = 999;  // Changes the original!
}

int myArray[3] = {1, 2, 3};
changeArray(myArray);
cout << myArray[0];  // Prints 999
```

## Important Points

### 1. Arrays are ALWAYS passed by reference:

- No need for `&` symbol
- Function automatically works with original array
- Changes persist after function ends

### 2. Size must be passed separately:

```cpp
int doSomething(int arr[], int n)  // Need 'n' to know array size
```

- Function doesn't know the size of the array
- Must pass size as separate parameter

### 3. This is efficient:

- No copying of large arrays
- Faster function calls
- Less memory usage

### 4. Be careful:

- Functions can accidentally modify your arrays
- Always consider if you want the array to be changed

## Read-Only Arrays

If you don't want function to modify the array, use `const`:

```cpp
void displayArray(const int arr[], int n)  // Can't modify array
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Can read
        // arr[i] = 100;        // ERROR: Can't modify
    }
}
```

## Summary

**Key Takeaway:** Unlike regular variables, arrays are automatically passed by reference to functions. This means:

- Function works with original array, not a copy
- Changes made in function affect the original array
- No special syntax needed - it happens automatically
- You must pass array size separately as another parameter
