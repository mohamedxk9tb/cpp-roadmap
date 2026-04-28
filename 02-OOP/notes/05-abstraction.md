# Abstraction in C++

## Navigation

- Previous: [Polymorphism](04-polymorphism.md)
- Next: —
- Task: [Task 5 - Abstraction](../tasks/task5-abstraction.md)

---

##  What is Abstraction?

Abstraction means hiding implementation details and showing only essential features.

Instead of showing how something works, we show what it does.

---

## Why Abstraction?

- Reduce complexity
- Hide unnecessary details
- Focus on important features

---

##  Real-life Example

When you drive a car:

- You use the steering wheel and pedals
- You don't need to know how the engine works

---

##  How to Achieve Abstraction?

In C++, we use:

- abstract classes
- pure virtual functions

---

##  Abstract Class Example

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};
```

---

##  Using Abstract Class

```cpp
int main() {
    Circle c;
    c.draw();

    return 0;
}
```

---

##  Key Concepts

- Abstract class → cannot be instantiated
- Pure virtual function → no body
- Child class must implement it

## Visualization

```mermaid
flowchart TB
    subgraph External_User
        A[Client Code]
    end
    subgraph Interface
        B[Abstract Class<br/>- virtual fn() = 0]
    end
    subgraph Implementation
        C[Concrete Class<br/>+ implement fn()]
    end
    A --> B
    B --> C
```

---

## Common Mistakes

- Trying to create object of abstract class ❌
- Not implementing virtual function ❌

---

##  Tips

- Use abstraction to simplify design
- Combine with inheritance
- Keep interfaces clean

---

## Full Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.speak();

    return 0;
}
```

---

## Practice

###  Easy

- Create abstract class

###  Medium

- Implement child class

###  Challenge

- Create 2 derived classes

---

##  Apply What You Learned

Go to → [Task 5: Abstraction](../tasks/task5-abstraction.md)

> Do not move forward before solving the task.

---

## End of OOP Notes

You have now completed:

- Classes
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
