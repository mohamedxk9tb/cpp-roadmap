# Task 5 - Deque

## Navigation

- Previous: [Queue](task4-queue.md)  
- Related Lesson: [Deque](../notes/05-deque.md)  
- Next: Move to Problems and Exam  

---

## Problem 1: Implement Deque (Array)

Implement a deque using a circular array.

### Requirements

- push_front  
- push_back  
- pop_front  
- pop_back  

### Constraints

- Do NOT use STL  
- Must handle wrap-around correctly  

---

## Problem 2: Sliding Window Maximum (Important)

Given an array and a window size k, find the maximum in each window.

### Example

Input:
```
arr = [1,3,-1,-3,5,3,6,7], k = 3
```

Output:
```
[3,3,5,5,6,7]
```

---

## Problem 3: Check Palindrome using Deque

Check if a string is a palindrome using deque.

### Example

Input:
```
racecar
```

Output:
```
true
```

---

## Problem 4: Design Deque System

Design a system that supports:

- insert/delete from both ends  
- efficient operations  

---

## Hints

- Deque allows both ends  
- For sliding window → maintain decreasing order  
- Use indices, not values  

---

## Challenge

- Solve sliding window in O(n)  
- Handle edge cases:
  - empty input  
  - k > n  

---

## Common Mistakes

- wrong front/rear update  
- incorrect circular indexing  
- using extra space unnecessarily  

---

## Next Step

## Next Step

 Move to:
- Problems → [Problems](../problems/)
- Exam → [Exam](../exam.md)