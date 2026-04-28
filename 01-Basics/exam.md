# Basics Final Exam (C++)

## Instructions

- Time: 60 minutes  
- No internet  
- Focus on logic, not syntax only  
- Write clean code  

---

# Part 1: Theory (10 Questions)

1. What is the difference between:
   - `int`, `float`, `double`

2. Explain the difference between:
   - `=` and `==`

3. Why do we use loops instead of repeating code?

4. What is array indexing? Why does it start from 0?

5. Difference between:
   - function declaration
   - function definition

6. What is the difference between:
   - `cin >>` and `getline()`

7. What is a pointer? Why do we use it?

8. Difference between:
   - pointer and reference

9. What is type casting? Give an example.

10. What is a `struct`? When should we use it?

---

# Part 2: What Will Be The Output (20 Questions)

### Q1
```cpp
int x = 5;
if(x = 10){
    cout << x;
}
```

---

### Q2
```cpp
int x = 5;
if(x == 10){
    cout << "Yes";
}else{
    cout << "No";
}
```

---

### Q3
```cpp
for(int i = 0; i < 3; i++){
    cout << i;
}
```

---

### Q4
```cpp
int arr[3] = {1,2,3};
cout << arr[2];
```

---

### Q5
```cpp
int x = 5;
cout << ++x;
```

---

### Q6
```cpp
int x = 5;
cout << x++;
```

---

### Q7
```cpp
int x = 3;
while(x > 0){
    cout << x;
    x--;
}
```

---

### Q8
```cpp
int arr[5] = {0};
cout << arr[2];
```

---

### Q9
```cpp
int x = 10;
if(x > 5 && x < 15){
    cout << "OK";
}
```

---

### Q10
```cpp
int x = 5;
if(x > 10 || x == 5){
    cout << "True";
}
```

---

### Q11
```cpp
int x = 5;
int y = &x;
```

 What is wrong here?

---

### Q12
```cpp
int x = 5;
int* p = &x;
cout << *p;
```

---

### Q13
```cpp
string s = "abc";
cout << s[1];
```

---

### Q14
```cpp
string s = "abc";
s[0] = 'z';
cout << s;
```

---

### Q15
```cpp
int x = 5;
int &r = x;
r = 10;
cout << x;
```

---

### Q16
```cpp
int x = 5;
int* p = &x;
*p = 20;
cout << x;
```

---

### Q17
```cpp
int x = 5;
if(x){
    cout << "Yes";
}
```

---

### Q18
```cpp
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 2; j++){
        cout << "*";
    }
}
```

---

### Q19
```cpp
int arr[3] = {1,2,3};
cout << arr[5];
```

 What happens?

---

### Q20
```cpp
int x = 5;
cout << (x > 3 ? "Yes" : "No");
```

---

# Part 3: Final Coding Question

## Problem: Student Management System

Write a program that:

- Uses a `struct` to store student data:
  - name
  - id
  - grade

- Allows user to:
  1. Add students  
  2. Display all students  
  3. Find student by ID  
  4. Calculate average grade  

---

## Requirements

- Use arrays  
- Use functions  
- Use loops and conditions  
- Handle invalid input  

---

## Evaluation Criteria

| Criteria   | Description              |
| ---------- | ------------------------ |
| Logic      | Correct thinking         |
| Code       | Clean & readable         |
| Edge Cases | Handles errors properly  |
| Structure  | Organized program        |

---

## Next Step

 Move to: [02-OOP](../02-OOP/README.md)