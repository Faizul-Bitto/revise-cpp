# C++ Functions - Reusable Code Blocks

This explains how to create and use functions to organize your code better.

---

## Void Function: [`a-voidFunction.cpp`](a-voidFunction.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

//! void doesn't return anything
void helloWorld()
{
    cout << "Hello World" << endl;
}

int main()
{
    //! calling a function
    helloWorld();
    return 0;
}
```

## Basic Function Structure

### Function Definition:

```cpp
void helloWorld()  // Function header
{                  // Opening brace
    cout << "Hello World" << endl;  // Function body
}                  // Closing brace
```

### Function Call:

```cpp
helloWorld();  // Calls the function
```

### What Happens:

1. Program starts at `main()`
2. Sees `helloWorld();` - jumps to the function
3. Runs the code inside `helloWorld()` function
4. Returns back to `main()` and continues

### `void` Keyword:

- Means the function doesn't return any value
- Just performs an action (like printing)

---

## Function with Parameters: [`b-parametrizedFunction.cpp`](b-parametrizedFunction.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

//! void doesn't return anything
void helloWorld(string name)
{
    cout << "Hello " << name << "!" << endl;
}

int main()
{
    string name;
    cin >> name;
    //! calling a function
    helloWorld(name);
    return 0;
}
```

## Function with Input (Parameters)

### Function with Parameter:

```cpp
void helloWorld(string name)  // 'name' is a parameter
{
    cout << "Hello " << name << "!" << endl;
}
```

### Calling with Argument:

```cpp
helloWorld(name);  // 'name' is the argument you pass
```

### How it Works:

1. You input a name (e.g., "Alice")
2. `helloWorld(name)` passes "Alice" to the function
3. Inside function, `name` becomes "Alice"
4. Prints: "Hello Alice!"

---

## Function that Returns a Value: [`c-sum.cpp`](c-sum.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int summation(int number1, int number2)
{
    int summation = number1 + number2;
    return summation;
}

int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    int result = summation(number1, number2);

    cout << result << endl;

    return 0;
}
```

## Return Functions

### Function that Returns:

```cpp
int summation(int number1, int number2)  // Returns 'int'
{
    int summation = number1 + number2;
    return summation;  // Sends value back
}
```

### Using the Returned Value:

```cpp
int result = summation(number1, number2);  // Catches the returned value
```

### How it Works:

1. Input two numbers (e.g., 5 and 3)
2. Call `summation(5, 3)`
3. Inside function: `summation = 5 + 3 = 8`
4. `return summation` sends 8 back
5. `result` becomes 8
6. Print: `8`

---

## Pass by Value: [`passByValue/passByValue.cpp`](passByValue/passByValue.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int doSomething(int number)
{
    number += 2;
    cout << number << endl;

    number += 2;
    cout << number << endl;

    return number;
}

int main()
{
    int number;
    cin >> number;
    cout << endl;

    cout << number << endl;

    doSomething(number);
    cout << endl;

    cout << number << endl; //! we will get the original value, because we have passed by value. So what it does, it takes a copy of the value, and works on it.

    return 0;
}
```

## Pass by Value Explained

### What Happens:

- Function gets a **copy** of the variable
- Changes inside function don't affect the original

### Example with input `10`:

1. `number = 10` in main
2. Print: `10`
3. Call `doSomething(number)` - sends copy of 10
4. Inside function: `number = 10 + 2 = 12`, print `12`
5. Inside function: `number = 12 + 2 = 14`, print `14`
6. Back in main: `number` is still `10` (unchanged!)
7. Print: `10`

**Output:**

```
10
12
14
10
```

---

## Pass by Reference: [`passByReference/passByReference.cpp`](passByReference/passByReference.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int doSomething(int &number)  // Note the '&' symbol
{
    number += 2;
    cout << number << endl;

    number += 2;
    cout << number << endl;

    return number;
}

int main()
{
    int number;
    cin >> number;
    cout << endl;

    cout << number << endl;

    doSomething(number);
    cout << endl;

    cout << number << endl; //! we will get the updated value because we have passed by reference. So, if we change the value, it will change the original value also.

    return 0;
}
```

## Pass by Reference Explained

### Key Difference:

```cpp
int doSomething(int &number)  // '&' means reference
```

### What Happens:

- Function works with the **original** variable (not a copy)
- Changes inside function affect the original

### Example with input `10`:

1. `number = 10` in main
2. Print: `10`
3. Call `doSomething(number)` - function works with original variable
4. Inside function: `number = 10 + 2 = 12`, print `12` (original changed!)
5. Inside function: `number = 12 + 2 = 14`, print `14` (original changed!)
6. Back in main: `number` is now `14` (changed!)
7. Print: `14`

**Output:**

```
10
12
14
14
```

## Pass by Value vs Pass by Reference

| Method                | Symbol        | Effect                        | When to Use                            |
| --------------------- | ------------- | ----------------------------- | -------------------------------------- |
| **Pass by Value**     | `int number`  | Copy made, original unchanged | When you don't want to change original |
| **Pass by Reference** | `int &number` | Original modified             | When you want to change original       |

## Key Function Concepts

- **Function**: Reusable block of code
- **void**: Function doesn't return anything
- **return**: Sends a value back to caller
- **Parameters**: Input to function
- **&** (reference): Work with original variable, not copy
