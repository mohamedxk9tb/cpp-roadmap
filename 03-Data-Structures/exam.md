# Data Structures Final Exam (Up to Deque)

## Navigation

- Previous: [Task 5 - Deque](tasks/task5-deque.md)

---

## Instructions

- Time: 2 hours  
- Do NOT use STL unless stated  
- Focus on logic and correctness  
- Write clean and readable code  

---

# Section 1: Theory (5 Questions)

### Q1
Explain the difference between:
- Array vs Linked List  
- Stack vs Queue  
Give use cases for each.

---

### Q2
Why is insertion in arrays O(n) but O(1) in linked lists?

---

### Q3
Explain circular queue and why it is better than a simple queue.

---

### Q4
What are the advantages and disadvantages of using deque?

---

### Q5
Explain time complexity of:
- Access in array vs linked list  
- Searching in unsorted array vs linked list  
- Deleting from beginning of array vs linked list  

---

# Section 2: What Will Be The Output

### Q6
```cpp
int arr[] = {1,2,3,4};
cout << arr[2];
```

---

### Q7
```cpp
int arr[3];
cout << arr[1];
```

- What happens?

---

### Q8
```cpp
int arr[] = {1,2,3};
for(int i = 0; i < 3; i++){
    cout << arr[i];
}
```

---

### Q9
```cpp
int arr[] = {1,2,3};
cout << *(arr + 1);
```

---

### Q10
```cpp
int x = 5;
int* p = &x;
cout << *p;
```

---

### Q11
```cpp
int x = 5;
int* p = &x;
*p = 20;
cout << x;
```

---

### Q12
```cpp
int arr[] = {1,2,3};
cout << arr[5];
```

- What happens?

---

### Q13
```cpp
int x = 5;
int* p = &x;
cout << p;
```

- What is printed?

---

# Section 3: Implementation (Core)

### Q14: Array Toolkit

Implement:
- reverse array  
- find max  
- rotate array by k  

Handle:
- empty array  
- k > size  

---

### Q15: Linked List Manager

Implement:
- insert at beginning  
- insert at end  
- delete by value  
- reverse list  

Handle:
- empty list  
- deleting non-existing value  

---

### Q16: Stack (Array)

Implement:
- push  
- pop  
- peek  

Then:
- Check if parentheses are valid  

Handle:
- empty stack  
- overflow  

---

### Q17: Queue (Circular)

Implement:
- enqueue  
- dequeue  
- display  

Handle:
- full queue  
- empty queue  

---

### Q18: Deque

Implement:
- push_front  
- push_back  
- pop_front  
- pop_back  

---

# Section 4: Problem Solving (Thinking)

### Q19: Remove Duplicates

Given array:
1 2 2 3 4 4 5  

Remove duplicates WITHOUT extra array.

---

### Q20: Balanced Parentheses

Check if string is valid using stack.

---

### Q21: Next Greater Element

Given array, find next greater element for each item.

---

# Section 5: Design (Real System)

### Q22: Browser History System

Design system:

- visit(url)  
- back(steps)  
- forward(steps)  

Constraints:
- max history = 100  
- cannot exceed bounds  

---

# Section 6: Challenge (Hard)

### Q23

Design a stack that supports:

- push  
- pop  
- getMin  
- getMax  

All in O(1)

---

## Evaluation Criteria

| Criteria     | Description                       |
| ------------ | --------------------------------- |
| Logic        | Correct thinking                  |
| Correctness  | All operations work properly      |
| Complexity   | Efficient solution                |
| Code Quality | Clean, readable code              |
| Edge Cases   | Handles boundary conditions       |

---

## Result

- 90%+ → Strong  
- 70–89% → Good  
- 50–69% → Needs improvement  
- <50% → Re-study  

---

## Next Step

🎉 You completed the C++ Roadmap!

Consider moving to:
- Advanced Data Structures  
- Algorithms  
- Competitive Programming  