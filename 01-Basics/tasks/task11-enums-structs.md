# Task 11 - Enums and Structs

## Navigation

- Previous Task: [Task 10 - Type Casting](task10-casting.md)
- Related Lesson: [Enums and Structs](../notes/11-enums-structs.md)
- Next Task: —
- Project: —

---

## Requirements

### Problem 1: Enum Basics

Create an enum `Day` with values:

- MONDAY
- TUESDAY
- WEDNESDAY
- THURSDAY
- FRIDAY
- SATURDAY
- SUNDAY

Write a program that takes a day number (1-7) and prints the corresponding day name.

---

### Problem 2: Structure Creation

Create a `Student` structure with:

- name (string)
- id (int)
- grade (double)

Create a student object, assign values, and display all information.

---

### Problem 3: Array of Structures

Create an array of 3 `Student` structures. Fill in the data and display all students.

---

### Problem 4: Nested Structure

Create a structure `Date` with:

- day (int)
- month (int)
- year (int)

Create a structure `Event` with:

- title (string)
- date (Date)

Create an event and display its details.

---

## Constraints

- Use proper enum syntax
- Initialize all structure members
- Use meaningful variable names

---

## Hints

- Use switch statement with enums
- Access structure members with dot operator
- Structures can be nested

---

## Challenge

Create a program that:

- Uses enum class for better type safety
- Creates a structure for a book (title, author, year)
- Stores multiple books in an array
- Displays all books published after a given year
