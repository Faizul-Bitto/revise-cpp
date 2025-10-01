# C++ Arrays - Storing Multiple Values

This explains how to store multiple values in one variable using arrays.

---

## Code: [`a-array.cpp`](a-array.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    cout << endl;

    arr[3] = 100;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    arr[3] = arr[3] + 100;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    return 0;
}
```

## What is an Array?

### Declaration:

```cpp
int arr[5];  // Creates an array that can store 5 integers
```

- `arr` is the array name
- `[5]` means it can hold 5 values
- Each position has an index: 0, 1, 2, 3, 4

### Array Indexing:

```
arr[0]  arr[1]  arr[2]  arr[3]  arr[4]
  0       1       2       3       4     ← Index numbers
```

- **Important**: Arrays start counting from 0, not 1!
- So a 5-element array has indices 0, 1, 2, 3, 4

## How Your Code Works

### 1. Input:

```cpp
cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
```

- Reads 5 numbers and stores them in the array
- First number goes to `arr[0]`, second to `arr[1]`, etc.

### 2. Display:

```cpp
cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4];
```

- Prints all 5 values with spaces between them

### 3. Modify one element:

```cpp
arr[3] = 100;  // Changes the 4th element (index 3) to 100
```

### 4. Modify using arithmetic:

```cpp
arr[3] = arr[3] + 100;  // Adds 100 to current value of arr[3]
```

## Example Run

**Input:** `10 20 30 40 50`

**Step by step:**

1. Array after input: `[10, 20, 30, 40, 50]`
2. First output: `10 20 30 40 50`
3. After `arr[3] = 100`: `[10, 20, 30, 100, 50]`
4. Second output: `10 20 30 100 50`
5. After `arr[3] = arr[3] + 100`: `[10, 20, 30, 200, 50]`
6. Third output: `10 20 30 200 50`

---

## 2D Arrays: [`b-2dArray.cpp`](b-2dArray.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! 3 rows and 5 columns
    int arr[3][5];

    arr[2][3] = 14;

    cout << arr[2][3] << endl;

    return 0;
}
```

## 2D Arrays Explained

### Declaration:

```cpp
int arr[3][5];  // 3 rows, 5 columns
```

### Think of it like a table:

```
       Column: 0  1  2  3  4
Row 0:         [ ][ ][ ][ ][ ]
Row 1:         [ ][ ][ ][ ][ ]
Row 2:         [ ][ ][ ][X][ ]  ← arr[2][3] is here
```

### Accessing elements:

```cpp
arr[2][3] = 14;  // Row 2, Column 3
```

- First number `[2]` = row
- Second number `[3]` = column

### Your code:

- Creates a 3×5 array (3 rows, 5 columns)
- Sets the element at row 2, column 3 to value 14
- Prints that value: `14`

## Key Points

- Arrays store multiple values of the same type
- Index starts from 0, not 1
- `arr[5]` has indices 0, 1, 2, 3, 4
- 2D arrays use two indices: `arr[row][column]`
- You can change individual elements anytime
