# Type Casting

## Navigation

- Previous: [09 - References](09-references.md)
- Next: [11 - Enums and Structs](11-enums-structs.md)

---

## Overview

Type casting is the process of converting one data type to another. C++ supports both C-style casting and C++-style casting operators. Understanding type casting is essential for proper data handling and avoiding unexpected behavior.

---

## Explanation

### Implicit Type Conversion

C++ automatically converts types in certain situations:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Integer promotion
    int i = 10;
    double d = i;  // int to double
    cout << "int to double: " << d << endl;

    // Arithmetic conversion
    int a = 5;
    int b = 2;
    double result = a / b;  // integer division
    cout << "Integer division: " << result << endl;

    result = (double)a / b;  // explicit conversion
    cout << "With cast: " << result << endl;

    // Widening conversion
    short s = 100;
    int j = s;  // short to int
    cout << "short to int: " << j << endl;

    return 0;
}
```

### C-Style Casting

```cpp
#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;

    // C-style cast
    int intPi = (int)pi;
    cout << "C-style cast: " << intPi << endl;

    // Functional cast
    int intPi2 = int(pi);
    cout << "Functional cast: " << intPi2 << endl;

    // With variables
    int a = 10, b = 3;
    double div = (double)a / b;
    cout << "Division with cast: " << div << endl;

    return 0;
}
```

### C++ Style Casting

C++ provides four specific casting operators:

#### static_cast

```cpp
#include <iostream>
using namespace std;

int main() {
    // Between numeric types
    double d = 9.99;
    int i = static_cast<int>(d);
    cout << "static_cast double to int: " << i << endl;

    // Between enum and int
    enum Color { RED = 1, GREEN = 2, BLUE = 3 };
    int c = static_cast<int>(GREEN);
    cout << "enum to int: " << c << endl;

    // void* to typed pointer
    void* ptr = &d;
    double* dp = static_cast<double*>(ptr);
    cout << "void* to double*: " << *dp << endl;

    return 0;
}
```

#### const_cast

```cpp
#include <iostream>
using namespace std;

void modify(const int* cp) {
    int* p = const_cast<int*>(cp);
    *p = 100;  // Remove const qualifier
}

int main() {
    int value = 50;
    const int* cp = &value;

    cout << "Before: " << *cp << endl;
    modify(cp);
    cout << "After: " << value << endl;

    return 0;
}
```

#### reinterpret_cast

```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 0x41424344;  // ABCD in little endian
    char* cp = reinterpret_cast<char*>(&num);

    cout << "As int: " << num << endl;
    cout << "As chars: ";
    for (int i = 0; i < 4; i++) {
        cout << cp[i];
    }
    cout << endl;

    // Pointer type conversion
    int* ip = &num;
    long* lp = reinterpret_cast<long*>(ip);

    return 0;
}
```

#### dynamic_cast

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {}
};

class Derived : public Base {
public:
    void show() override {}
};

int main() {
    Base* base = new Derived();

    // Downcast
    Derived* derived = dynamic_cast<Derived*>(base);
    if (derived) {
        cout << "Downcast successful" << endl;
    }

    // Failed downcast
    Base* base2 = new Base();
    Derived* derived2 = dynamic_cast<Derived*>(base2);
    if (!derived2) {
        cout << "Downcast failed (returns nullptr)" << endl;
    }

    delete base;
    delete base2;

    return 0;
}
```

### Safe Casting with static_cast

```cpp
#include <iostream>
using namespace std;

int main() {
    // Converting between related types
    char c = 'A';
    int i = static_cast<int>(c);
    cout << "char to int: " << i << endl;

    // Boolean to int
    bool flag = true;
    int flagInt = static_cast<int>(flag);
    cout << "bool to int: " << flagInt << endl;

    // void pointer conversion
    int arr[] = {1, 2, 3};
    void* vptr = arr;
    int* iptr = static_cast<int*>(vptr);
    cout << "First element: " << *iptr << endl;

    return 0;
}
```

### Explicit Keyword for User-Defined Conversions

```cpp
#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;
public:
    Fraction(int n, int d) : num(n), den(d) {}

    // Implicit conversion from int
    operator int() const {
        return num / den;
    }

    // Explicit conversion
    explicit operator double() const {
        return static_cast<double>(num) / den;
    }
};

int main() {
    Fraction f(5, 2);

    // Implicit conversion (allowed)
    int value = f;
    cout << "Implicit: " << value << endl;

    // Explicit conversion (requires cast)
    double d = static_cast<double>(f);
    cout << "Explicit: " << d << endl;

    return 0;
}
```

---

## Visualization

```mermaid
flowchart TD
    A[Type Casting] --> B[Implicit]
    A --> C[Explicit]

    B --> D[Automatic by compiler]
    B --> E[Widening: int to double]
    B --> F[Narrowing: double to int]

    C --> G[C-style: (type)value]
    C --> H[C++ style]

    H --> I[static_cast: safe conversions]
    H --> J[const_cast: remove/add const]
    H --> K[reinterpret_cast: bit reinterpret]
    H --> L[dynamic_cast: runtime check]
```

---

## Advantages

| Advantage      | Description                           |
| -------------- | ------------------------------------- |
| Type safety    | C++ casts are more explicit and safer |
| Searchability  | Easier to find in code                |
| Intent clarity | Each cast has specific purpose        |
| Runtime checks | dynamic_cast provides safety          |

---

## Disadvantages

| Disadvantage | Description                    |
| ------------ | ------------------------------ |
| Verbosity    | C++ casts are longer           |
| Complexity   | Four different casts to choose |
| Overuse      | Can indicate design problems   |

---

## Common Mistakes

1. **Loss of data** - Casting double to int loses decimal part
2. **Using wrong cast** - Using static_cast where dynamic_cast needed
3. **Casting away const** - Leads to undefined behavior
4. **Unnecessary casts** - Hiding design problems
5. **Pointer type confusion** - Casting incompatible pointer types

---

## Thinking Questions

1. What is the difference between implicit and explicit casting?
2. When should you use static_cast vs. C-style cast?
3. What is the purpose of const_cast?
4. Why is dynamic_cast safer than reinterpret_cast?
5. What happens when you cast a double to an int?

---

## Practice Problems

1. Write a program to convert Fahrenheit to Celsius using type casting.
2. Create a program that demonstrates the difference between implicit and explicit casting.
3. Write a program to safely cast between related classes.
4. Create a program that shows data loss when narrowing conversions.
5. Write a program to implement a user-defined conversion operator.
