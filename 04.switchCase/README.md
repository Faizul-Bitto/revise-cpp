# C++ Switch Statement - Multiple Choices

This explains how to handle multiple choices more efficiently than many if-else statements.

---

## Code: [`switchCase.cpp`](switchCase.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid day" << endl;
        break;
    }
}
```

## How Switch Works

### Basic Structure:

```cpp
switch (variable)
{
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Code if no case matches
        break;
}
```

### In Your Code:

- **Variable**: `day` (the number you input)
- **Cases**: 1, 2, 3, 4, 5, 6, 7 (possible values)
- **Default**: Runs if input doesn't match any case

### Examples:

- Input `1` → Output: `Monday`
- Input `5` → Output: `Friday`
- Input `8` → Output: `Invalid day` (goes to default)

## Important Keywords

### `break`:

```cpp
case 1:
    cout << "Monday" << endl;
    break;  // IMPORTANT: Stops here and exits switch
```

- **Without break**: Code continues to next case
- **With break**: Stops and exits the switch

### `default`:

```cpp
default:
    cout << "Invalid day" << endl;
    break;
```

- Runs when no case matches
- Like the final `else` in if-else chains

## Switch vs If-Else

### Switch (your code):

```cpp
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    // ...
}
```

### Equivalent If-Else:

```cpp
if (day == 1) {
    cout << "Monday";
} else if (day == 2) {
    cout << "Tuesday";
} else if (day == 3) {
    cout << "Wednesday";
// ... and so on
} else {
    cout << "Invalid day";
}
```

## When to Use Switch

**Use Switch when:**

- Testing one variable against many exact values
- You have many specific options (like days, menu choices)
- Values are constants (numbers, characters)

**Use If-Else when:**

- Testing ranges (like `if (marks >= 80)`)
- Complex conditions
- Different variables in each condition

## What Happens Without Break?

```cpp
switch (day) {
    case 1:
        cout << "Monday";
        // No break here!
    case 2:
        cout << "Tuesday";
        break;
}
```

- Input `1` would print: `MondayTuesday`
- This is called "fall-through" - usually not wanted!
