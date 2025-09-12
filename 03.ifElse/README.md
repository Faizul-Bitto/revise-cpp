# C++ If-Else Statements - Making Decisions

This explains how to make your program choose different actions based on conditions.

---

## Your Code: [`a-ifElse.cpp`](a-ifElse.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "adult";
    }
    else
    {
        cout << "not an adult";
    }

    return 0;
}
```

## How If-Else Works

### Basic Structure:

```cpp
if (condition)
{
    // Code that runs if condition is TRUE
}
else
{
    // Code that runs if condition is FALSE
}
```

### In Your Code:

- **Condition**: `age >= 18` (is age greater than or equal to 18?)
- **If TRUE**: Print "adult"
- **If FALSE**: Print "not an adult"

### Examples:

- Input `20` → Output: `adult` (because 20 >= 18 is true)
- Input `15` → Output: `not an adult` (because 15 >= 18 is false)

---

## Grade System Code: [`b-ifElseProblem.cpp`](b-ifElseProblem.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    else if (marks <= 25)
    {
        cout << "F";
    }

    return 0;
}
```

## Multiple Conditions (else if)

### Structure:

```cpp
if (condition1)
{
    // Code for condition1
}
else if (condition2)
{
    // Code for condition2
}
else if (condition3)
{
    // Code for condition3
}
else
{
    // Code if none of the above
}
```

### Grade Ranges:

- **A**: 80-100 marks
- **B**: 60-79 marks
- **C**: 50-59 marks
- **D**: 45-49 marks
- **E**: 25-44 marks
- **F**: 25 or below

### Using `&&` (AND operator):

```cpp
marks >= 80 && marks <= 100
```

- This means: marks must be greater than or equal to 80 AND less than or equal to 100
- Both conditions must be true

### How it works:

1. Check first condition (80-100) → if true, print "A" and stop
2. If false, check next condition (60-79) → if true, print "B" and stop
3. Continue until a condition is true
4. Only ONE condition will execute

### Examples:

- Input `85` → Output: `A` (because 85 is between 80-100)
- Input `65` → Output: `B` (because 65 is between 60-79)
- Input `20` → Output: `F` (because 20 is <= 25)

## Comparison Operators

- `>=` means "greater than or equal to"
- `<=` means "less than or equal to"
- `>` means "greater than"
- `<` means "less than"
- `==` means "equal to"
- `!=` means "not equal to"
