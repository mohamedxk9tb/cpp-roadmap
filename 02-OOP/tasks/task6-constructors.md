# Task 6 - Constructors

## Navigation

- Previous: [Task 5 - Abstraction](task5-abstraction.md)
- Next: [Task 7 - Destructors](task7-destructors.md)

---

## Overview

Constructors are special member functions that are automatically called when an object is created. They initialize the object's state and ensure proper setup before the object can be used.

---

## Problems

### Problem 1: Simple Constructor

Create a class `Player` with:

- private: name (string), score (int)
- public: constructor that initializes name to "Unknown" and score to 0
- public: function display() to show player info

Test by creating 3 player objects.

---

### Problem 2: Parameterized Constructor

Create a class `BankAccount` with:

- private: accountNumber (string), balance (double)
- public: constructor that takes parameters for both fields
- public: function display() to show account details

Create 2 accounts with different initial balances.

---

### Problem 3: Constructor with Validation

Create a class `Temperature` with:

- private: celsius (double)
- public: constructor that accepts Fahrenheit and converts to Celsius
- Formula: C = (F - 32) \* 5/9
- public: function getCelsius() to return the value

Test with freezing point (32F) and boiling point (212F).

---

## Constraints

- Use proper constructor syntax: `ClassName(parameters)`
- Initialize all member variables in constructors
- Handle edge cases (negative values where applicable)

---

## Hints

- Constructors have the same name as the class
- Constructors do not have a return type
- Use initializer list for efficient initialization when needed

---

## Challenge

Create a class `Rectangle` with:

- private: width, height (both double)
- Two constructors:
  - Default: width=1, height=1
  - Parameterized: accepts both dimensions
- Function area() that returns width \* height

Create objects using both constructors and display their areas.
