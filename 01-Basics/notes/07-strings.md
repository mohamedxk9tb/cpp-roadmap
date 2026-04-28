# Strings

## Navigation

- Previous: [06 - Input/Output](06-input-output.md)
- Next: [08 - Pointers](08-pointers.md)

---

## Overview

Strings in C++ can be handled in multiple ways: C-style character arrays and the C++ `string` class. The `string` class provides powerful and safe string manipulation capabilities.

---

## Explanation

### C-Style Strings

C-style strings are arrays of characters ending with a null character `\0`:

```cpp
#include <iostream>
using namespace std;

int main() {
    char name[] = "Hello";  // Automatically adds \0
    char greeting[20] = "World";

    cout << name << endl;
    cout << greeting << endl;

    // String functions from <cstring>
    cout << strlen(name) << endl;      // Length: 5
    strcpy(greeting, "Hi");            // Copy string
    strcat(name, " World");            // Concatenate

    return 0;
}
```

### C++ String Class

The `string` class provides safer and more feature-rich string handling:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string s3;

    // Concatenation
    s3 = s1 + " " + s2;
    cout << s3 << endl;

    // Length
    cout << "Length: " << s1.length() << endl;
    cout << "Size: " << s1.size() << endl;

    // Access characters
    cout << "First char: " << s1[0] << endl;
    cout << "First char: " << s1.at(0) << endl;

    // Substring
    string sub = s3.substr(0, 5);
    cout << "Substring: " << sub << endl;

    // Find
    size_t pos = s3.find("World");
    cout << "Found at: " << pos << endl;

    // Replace
    s3.replace(0, 5, "Hi");
    cout << "Replaced: " << s3 << endl;

    return 0;
}
```

### String Comparison

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "apple";
    string s2 = "banana";
    string s3 = "apple";

    // Comparison operators
    if (s1 == s3) cout << "s1 == s3" << endl;
    if (s1 != s2) cout << "s1 != s2" << endl;
    if (s1 < s2) cout << "s1 < s2 (lexicographically)" << endl;

    // compare() function
    cout << s1.compare(s2) << endl;  // Negative if s1 < s2

    return 0;
}
```

### String Modification

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";

    // Insert
    s.insert(5, ",");
    cout << s << endl;  // "Hello, World"

    // Erase
    s.erase(5, 1);
    cout << s << endl;  // "Hello World"

    // Push back / Pop back
    s.push_back('!');
    cout << s << endl;
    s.pop_back();

    // Clear
    s.clear();
    cout << "Empty: " << s.empty() << endl;

    return 0;
}
```

### String Input

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    // Basic input (stops at whitespace)
    cout << "Enter name: ";
    cin >> name;

    // Line input (includes spaces)
    cout << "Enter full name: ";
    cin.ignore();  // Clear newline from buffer
    getline(cin, name);

    // String stream
    string line = "one two three";
    string word;
    stringstream ss(line);
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}
```

---

## Visualization

```mermaid
flowchart LR
    A[String Creation] --> B[Empty: string s]
    A --> C[From literal: string s = "text"]
    A --> D[From char*: string s = cString]

    B --> E[Operations]
    C --> E
    D --> E

    E --> F[Concatenation: +]
    E --> G[Comparison: ==, <, >]
    E --> H[Access: [], at()]
    E --> I[Modification: push_back, pop_back]
    E --> J[Search: find, substr]
    E --> K[Transform: insert, erase, replace]
```

---

## Advantages

| Advantage          | Description                                |
| ------------------ | ------------------------------------------ |
| Dynamic size       | Can grow and shrink at runtime             |
| Safe               | No buffer overflow risks                   |
| Rich functionality | Built-in methods for all common operations |
| Automatic memory   | Handles allocation/deallocation            |

---

## Disadvantages

| Disadvantage   | Description                |
| -------------- | -------------------------- |
| Overhead       | More memory than C-strings |
| Performance    | Some operations are slower |
| Learning curve | Many methods to learn      |

---

## Common Mistakes

1. **Using `cin >>` for sentences** - Only reads until whitespace
2. **Forgetting to include `<string>`** - Compilation error
3. **Comparing strings with `==` on char arrays** - Compares pointers
4. **Not clearing input buffer** - Causes unexpected behavior
5. **Off-by-one errors in substr** - Index starts at 0

---

## Thinking Questions

1. What is the difference between C-style strings and C++ strings?
2. How does `substr` work? What happens if you request too many characters?
3. Why is `getline` needed for reading lines with spaces?
4. What is the time complexity of string concatenation with `+`?
5. How does `find` behave when the substring is not found?

---

## Practice Problems

1. Write a program to count vowels in a string.
2. Create a program to reverse a string.
3. Write a program to check if a string is a palindrome.
4. Create a program to find the longest word in a sentence.
5. Write a program to replace all occurrences of a word in a string.
