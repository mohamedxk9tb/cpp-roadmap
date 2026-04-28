# Binary to Decimal Converter (C++)

## Navigation

- Based on: [Task 3 - Loops](../../tasks/task3-loops.md)
- Next Step: [Task 4 - Arrays](../../tasks/task4-arrays.md)

---

##  Description

This program converts a binary number (base 2) into its decimal equivalent (base 10).

---

## Concepts Used

- Loops
- Math operations
- Variables
- Input / Output

---

##  How it works

1. User enters a binary number
2. Program processes each digit
3. Converts it to decimal using powers of 2

---

## Example

```
Input: 1011
Output: 11
```

---

## Formula

Each digit is multiplied by:

```
2^position
```

Example:

```
1011 = 1×2³ + 0×2² + 1×2¹ + 1×2⁰
     = 8 + 0 + 2 + 1
     = 11
```

---

## Future Improvements

- Validate input (only 0 and 1)
- Convert decimal to binary
- Support larger numbers

---

- `main.cpp` → contains the full implementation of the project

##  Related Task

Go to → [Task 3: Loops](../../../01-Basics/tasks/task3-loops.md)
