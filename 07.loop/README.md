# C++ Loops - Repeating Code

This explains how to repeat code multiple times using different types of loops.

---

## For Loop: [`a-forLoop.cpp`](a-forLoop.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Hello World" << " " << i << ", " << "total : " << i + 1 << endl;
    }

    return 0;
}
```

## How For Loop Works

### Structure:

```cpp
for (start; condition; increment)
{
    // Code to repeat
}
```

### Breaking Down Your Loop:

```cpp
for (int i = 0; i < 10; i++)
     │         │       │
     │         │       └── After each loop: i = i + 1 (increment)
     │         └────────── Keep looping while: i < 10 (condition)
     └──────────────────── Start with: i = 0 (initialization)
```

### What Happens:

1. `i = 0` (start)
2. Check: `i < 10`? Yes (0 < 10), so run the code
3. Print: "Hello World 0, total : 1"
4. `i++` (i becomes 1)
5. Check: `i < 10`? Yes (1 < 10), so run the code again
6. Print: "Hello World 1, total : 2"
7. Continue until `i = 10`, then `10 < 10` is false, so stop

### Output:

```
Hello World 0, total : 1
Hello World 1, total : 2
Hello World 2, total : 3
...
Hello World 9, total : 10
```

(Runs 10 times: i = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9)

---

## Reverse For Loop: [`b-forLoopReversed.cpp`](b-forLoopReversed.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 10; i > 0; i--)
    {
        cout << "Hello World" << " " << i << ", " << "total : " << i - 1 << endl;
    }

    return 0;
}
```

## Reverse Loop Explained

### Structure:

```cpp
for (int i = 10; i > 0; i--)
     │           │      │
     │           │      └── After each loop: i = i - 1 (decrement)
     │           └───────── Keep looping while: i > 0 (condition)
     └─────────────────── Start with: i = 10 (initialization)
```

### What Happens:

1. `i = 10` (start)
2. Check: `i > 0`? Yes (10 > 0), so run the code
3. Print: "Hello World 10, total : 9"
4. `i--` (i becomes 9)
5. Continue until `i = 0`, then `0 > 0` is false, so stop

### Output:

```
Hello World 10, total : 9
Hello World 9, total : 8
Hello World 8, total : 7
...
Hello World 1, total : 0
```

(Runs 10 times: i = 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

---

## While Loop: [`c-whileLoop.cpp`](c-whileLoop.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;

    while (i <= 10)
    {
        cout << "Hello World" << " " << i << ", " << "total : " << i + 1 << endl;
        i++;
    }

    return 0;
}
```

## While Loop Explained

### Structure:

```cpp
int i = 0;          // Initialize before loop
while (condition)   // Check condition
{
    // Code to repeat
    i++;            // Increment inside loop (important!)
}
```

### Difference from For Loop:

- **For loop**: Everything (start, condition, increment) in one line
- **While loop**: You manage start and increment separately

### Your While Loop:

1. `i = 0` (initialize outside)
2. Check: `i <= 10`? Yes, run code
3. Print message
4. `i++` (increment inside loop)
5. Repeat until `i > 10`

---

## Do-While Loop: [`d-doWhileLoop.cpp`](d-doWhileLoop.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;

    do
    {
        cout << "Hello World" << " " << i << ", " << "total : " << i + 1 << endl;
        i++;
    } while (i <= 10);

    return 0;
}
```

## Do-While Explained

### Structure:

```cpp
do
{
    // Code runs first
} while (condition);  // Then check condition
```

### Key Difference:

- **While loop**: Check condition FIRST, then run code
- **Do-while loop**: Run code FIRST, then check condition
- **Result**: Do-while always runs at least once

### When to Use Each Loop:

| Loop Type    | Use When                          | Example                                           |
| ------------ | --------------------------------- | ------------------------------------------------- |
| **For**      | You know how many times to repeat | "Print 10 times"                                  |
| **While**    | You don't know exact count        | "Keep asking until user enters 'quit'"            |
| **Do-While** | You want to run at least once     | "Show menu, then check if user wants to continue" |

## Important Notes

- `i++` means `i = i + 1` (increase by 1)
- `i--` means `i = i - 1` (decrease by 1)
- Always make sure your loop condition will eventually become false, or you get an infinite loop!
- In while loops, don't forget to increment the counter inside the loop
