# C++ Data Types - Different Types of Variables

This explains the different types of data you can store in C++ variables.

---

## Your Code: [`a-dataTypes.cpp`](a-dataTypes.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //! integer data type declaration in a variable
    int a = 10;
    cout << a << endl;

    //! long data type declaration in a variable (long = large number)
    long b = 1000000;
    cout << b << endl;

    //! long long data type declaration in a variable (long long = very large number)
    long long c = 10000000000000;
    cout << c << endl;

    //! float data type declaration in a variable
    float d = 50.50;
    float e = 60; //* can be also declared like int, but will be stored as float
    cout << d << endl;
    cout << e << endl;

    //! string data type declaration in a variable
    string f = "Hello World";
    cout << f << endl;

    //! char data type declaration in a variable
    char g = 'a'; //* only stores a character-> in single quotes, not like double quotes for strings
    cout << g << endl;

    return 0;
}
```

## Data Types Explained

### 1. Integer Types

```cpp
int a = 10;           // Regular whole numbers
long b = 1000000;     // Bigger whole numbers
long long c = 10000000000000;  // Very big whole numbers
```

- **int**: Stores whole numbers like 10, -5, 0
- **long**: Stores bigger whole numbers
- **long long**: Stores very large whole numbers

### 2. Decimal Numbers

```cpp
float d = 50.50;      // Decimal numbers
float e = 60;         // Can store whole numbers too, but as decimal
```

- **float**: Stores numbers with decimal points like 50.50, 3.14
- You can put whole numbers in float, they become 60.0

### 3. Text

```cpp
string f = "Hello World";  // Multiple characters
char g = 'a';              // Single character only
```

- **string**: Stores text with double quotes `"Hello"`
- **char**: Stores only ONE character with single quotes `'a'`

### 4. Key Differences

- **Quotes**:
  - `"Hello"` (double quotes) = string
  - `'a'` (single quotes) = char
- **Numbers**:
  - `10` = whole number (int)
  - `10.5` = decimal number (float)

---

## String Input Code: [`b-stringInput.cpp`](b-stringInput.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    //* if we write "Hello World" -> It will only pring "Hello". "World" will not be printed
    cin >> a;
    cout << a;

    //* it will take two strings
    string b, c;
    cin >> b >> c;
    cout << b << " " << c;
    return 0;

    //* if we want to take a whole sentence, we can write like this with gaps:
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}
```

## String Input Problems

### Problem with `cin` and spaces:

```cpp
cin >> a;  // If you type "Hello World", only "Hello" gets stored
```

- `cin` stops reading at the first space
- So "Hello World" becomes just "Hello"

### Reading multiple words:

```cpp
cin >> b >> c;  // "Hello World" -> b="Hello", c="World"
```

### Reading full sentences:

```cpp
getline(cin, str);  // Reads the whole line including spaces
```

- Use `getline()` to read sentences with spaces
- `cin` only reads one word, `getline` reads the whole line

## Output

**Example 1:**

- Input: `Hello World`
- Output: `Hello` (only first word)

**Example 2:**

- Input: `Hello World`
- Output: `Hello World` (both words separately)
