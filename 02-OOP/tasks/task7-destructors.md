# Task 7 - Destructors

## Navigation

- Previous: [Task 6 - Constructors](task6-constructors.md)
- Next: [Task 8 - Static Members](task8-static.md)

---

## Overview

Destructors are special member functions that are automatically called when an object is destroyed. They perform cleanup operations such as releasing resources, closing files, or freeing dynamic memory.

---

## Problems

### Problem 1: Basic Destructor

Create a class `Logger` with:

- private: message (string)
- public: constructor that takes a message and prints "Object created: [message]"
- public: destructor that prints "Object destroyed: [message]"
- public: function log() to print the message

Create a local object and observe when destructor is called.

---

### Problem 2: Resource Management

Create a class `FileHandler` with:

- private: filename (string), filePointer (pointer to FILE)
- public: constructor that opens a file in write mode
- public: destructor that closes the file
- public: function write(string) to write to the file

Simulate file handling (use cout for demonstration).

---

### Problem 3: Dynamic Memory Cleanup

Create a class `DynamicArray` with:

- private: array (int\*), size (int)
- public: constructor that takes size and allocates memory
- public: destructor that frees the memory
- public: function set(index, value) and get(index)

Create and destroy objects to verify memory is properly freed.

---

## Constraints

- Destructor name must be ~ClassName
- Destructors take no parameters
- Only one destructor per class
- Never call destructor explicitly

---

## Hints

- Destructors are called automatically when:
  - Object goes out of scope
  - Program ends
  - delete is called on dynamic object
- Use RAII (Resource Acquisition Is Initialization) pattern

---

## Challenge

Create a class `Connection` that simulates:

- Constructor: "Connection established"
- Destructor: "Connection closed"
- Do some operations in between

Create multiple objects in different scopes and observe the order of destruction.
