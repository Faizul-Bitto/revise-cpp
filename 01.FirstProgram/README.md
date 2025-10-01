# C++ First Program - Basic Input/Output

This explains your first C++ program that reads two numbers from the user and displays them back.

---

## Code: [`helloWorld.cpp`](helloWorld.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    cout << "First number is : " << x << " and second number is : " << y << endl;

    return 0;
}
```

## Understanding Each Line

### 1. Header and Namespace

```cpp
#include <bits/stdc++.h>  // Includes all C++ libraries
using namespace std;       // So we can use cout, cin directly
```

### 2. Main Function

```cpp
int main()
```

- Every C++ program starts here
- `int` means it returns a number

### 3. Variable Declaration

```cpp
int x, y;
```

- Creates two integer variables `x` and `y`
- Can store whole numbers

### 4. Input

```cpp
cin >> x >> y;
```

- `cin` reads input from keyboard
- `>>` means "put input into"
- Reads first number into `x`, second into `y`

### 5. Output

```cpp
cout << "First number is : " << x << " and second number is : " << y << endl;
```

- `cout` displays output on screen
- `<<` means "send to output"
- Text in quotes prints exactly
- Variable names print their values
- `endl` makes a new line

### 6. Return

```cpp
return 0;
```

- Tells system program finished successfully

## How It Works

1. Program starts
2. Creates two variables `x` and `y`
3. Waits for you to type two numbers
4. Stores first number in `x`, second in `y`
5. Prints a message showing both numbers
6. Program ends

## Example Run

**You type:**

```
15 25
```

**Output:**

```
First number is : 15 and second number is : 25
```

## Key C++ Syntax

- **Semicolons**: Every statement ends with `;`
- **Braces**: Use `{` and `}` to group code
- **Case sensitive**: `cout` and `Cout` are different
- **Comments**: Use `//` for explanations
