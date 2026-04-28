# Task 9 - Operator Overloading

## Navigation

- Previous: [Task 8 - Static Members](task8-static.md)
- Next: —

---

## Overview

Operator overloading allows you to redefine the behavior of built-in operators for user-defined types. This makes your classes work naturally with standard operators.

---

## Problems

### Problem 1: Arithmetic Operators

Create a class `Complex` with:

- private: real (double), imaginary (double)
- public: constructor (real=0, imaginary=0)
- public: operator+ for adding two Complex numbers
- public: operator- for subtracting two Complex numbers
- public: function display() to show "a + bi" format

Test: (3+2i) + (1+4i) and (5+3i) - (2+1i)

---

### Problem 2: Comparison Operators

Create a class `Fraction` with:

- private: numerator (int), denominator (int)
- public: constructor
- public: operator== to check equality
- public: operator< to compare fractions
- public: operator> to compare fractions
- Helper: function toDecimal() for comparison

Test: 1/2 == 2/4 and 3/4 > 1/2

---

### Problem 3: Stream Operators

Create a class `Point` with:

- private: x (int), y (int)
- public: constructor
- public: operator<< for output (format: "(x, y)")
- public: operator>> for input

Use cin/cout with Point objects.

---

## Constraints

- Cannot overload: ::, ., .\*, ?:
- At least one operand must be user-defined type
- Cannot change operator precedence
- Cannot create new operators

---

## Hints

- Use `returnType operator+(parameters)` syntax
- For binary operators, left operand is implicit
- Consider making operators friend for private access
- Always return appropriate types for chaining

---

## Challenge

Create a class `Matrix` (2x2) with:

- operator+ for addition
- operator\* for multiplication
- operator== for equality
- operator<< for output

Implement matrix arithmetic and verify results.
