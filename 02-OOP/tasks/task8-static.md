# Task 8 - Static Members

## Navigation

- Previous: [Task 7 - Destructors](task7-destructors.md)
- Next: [Task 9 - Operator Overloading](task9-operator-overloading.md)

---

## Overview

Static members belong to the class rather than to any specific object. They are shared across all objects of the class and can be accessed without creating an instance.

---

## Problems

### Problem 1: Static Counter

Create a class `Counter` with:

- private: count (int) - instance variable
- public: static variable totalObjects (int)
- public: constructor that increments totalObjects
- public: destructor that decrements totalObjects
- public: function getCount() to return instance count
- public: static function getTotal() to return totalObjects

Create 3 objects, display their counts, then destroy one and observe the total.

---

### Problem 2: Static Configuration

Create a class `Settings` with:

- private: appName (string), version (string)
- public: static variable defaultTheme (string)
- public: static variable maxUsers (int)
- public: constructor and display function
- public: static function changeTheme(string)

Set and display static values without creating objects.

---

### Problem 3: Static Factory Method

Create a class `Shape` with:

- private: id (int), type (string)
- public: static variable objectCount (int)
- public: static function createCircle(double radius)
- public: static function createRectangle(double w, double h)
- Both factory functions create and return Shape objects

Use factory methods to create shapes and track count.

---

## Constraints

- Static variables must be defined outside the class
- Static functions can only access static members directly
- Static members are shared across all instances

---

## Hints

- Use `ClassName::staticMember` to access static members
- Static variables need separate definition in .cpp file
- Static functions do not have this pointer

---

## Challenge

Create a class `Database` with:

- static variable: connectionCount
- static function: getConnectionCount()
- constructor: increments connectionCount
- destructor: decrements connectionCount
- Simulate multiple connections being created and closed

Track and display the number of active connections at various points.
