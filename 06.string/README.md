# C++ Strings - Working with Text

This explains how to work with text (strings) and access individual characters.

---

## Your Code: [`a-string.cpp`](a-string.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World!";

    cout << str[4] << endl;

    return 0;
}
```

## String Indexing

### String as Array of Characters:

```cpp
string str = "Hello World!";
```

The string is stored like this:

```
Index:  0 1 2 3 4 5 6 7 8 9 10 11
Char:   H e l l o   W o r l d  !
```

### Accessing Characters:

```cpp
str[4]  // Gets the character at index 4, which is 'o'
```

### Your Code Output:

- `str[4]` points to index 4
- Index 4 contains the character 'o'
- Output: `o`

---

## String Manipulation: [`b-string.cpp`](b-string.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World!";

    int length = str.size();

    cout << length << endl;

    cout << str[length - 2] << endl;

    str[length - 1] = 'z';

    cout << str;

    return 0;
}
```

## Understanding String Operations

### 1. Getting String Length:

```cpp
int length = str.size();  // Gets the number of characters
```

- `"Hello World!"` has 12 characters (including space and !)
- `length = 12`

### 2. Accessing Characters by Position:

```cpp
str[length - 2]  // Gets second-to-last character
```

- `length - 2 = 12 - 2 = 10`
- `str[10]` is 'd'

### 3. Changing Characters:

```cpp
str[length - 1] = 'z';  // Changes last character to 'z'
```

- `length - 1 = 12 - 1 = 11`
- `str[11]` was '!', now becomes 'z'
- String becomes "Hello Worldz"

## Step by Step Output

**Original string:** `"Hello World!"`

1. `length = 12` (first output)
2. `str[length - 2] = str[10] = 'd'` (second output)
3. Change `str[11]` from '!' to 'z'
4. Final string: `"Hello Worldz"` (third output)

**Complete Output:**

```
12
d
Hello Worldz
```

## Key String Concepts

### String Methods:

- `str.size()` - returns length of string
- `str.length()` - same as size()

### Character Access:

- `str[0]` - first character
- `str[str.size() - 1]` - last character
- You can read and modify individual characters

### Important Notes:

- String indices start from 0
- Last character is at index `length - 1`
- You can change individual characters using `str[index] = 'newchar'`
- Use single quotes for individual characters: `'a'`, `'z'`
- Use double quotes for strings: `"hello"`
