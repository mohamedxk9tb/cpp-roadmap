
# OOP Final Exam (C++)


## Navigation

- Previous: [Task 9 - Operator Overloading](tasks/task9-operator-overloading.md)

## Instructions

- Time: 120–150 minutes  
- Focus on design and understanding  
- Write clean, structured code  

---

# Part 1: Theory (10 Questions)

1. What is the difference between:
   - class and object

2. Explain encapsulation and why it is important.

3. What is abstraction? Give a real example.

4. What is inheritance? Why do we use it?

5. What is polymorphism?

6. Difference between:
   - function overloading
   - function overriding

7. What is a constructor? Why is it needed?

8. What is a destructor? When is it called?

9. What is a static member? Give a use case.

10. What is operator overloading? When should you use it?

---

# Part 2: What Will Be The Output (20 Questions)

### Q1
```cpp
class A{
public:
    int x = 5;
};

int main(){
    A a;
    cout << a.x;
}
```

---

### Q2
```cpp
class A{
public:
    A(){
        cout << "Constructor";
    }
};

int main(){
    A a;
}
```

---

### Q3
```cpp
class A{
public:
    ~A(){
        cout << "Destructor";
    }
};

int main(){
    A a;
}
```

---

### Q4
```cpp
class A{
public:
    static int x;
};

int A::x = 10;

int main(){
    cout << A::x;
}
```

---

### Q5
```cpp
class A{
public:
    int x;
    A(int x){
        this->x = x;
    }
};

int main(){
    A a(5);
    cout << a.x;
}
```

---

### Q6
```cpp
class A{
public:
    void show(){
        cout << "A";
    }
};

class B : public A{};

int main(){
    B b;
    b.show();
}
```

---

### Q7
```cpp
class A{
public:
    virtual void show(){
        cout << "A";
    }
};

class B : public A{
public:
    void show(){
        cout << "B";
    }
};

int main(){
    A* ptr = new B();
    ptr->show();
}
```

---

### Q8
```cpp
class A{
public:
    void show(int x){
        cout << x;
    }

    void show(double x){
        cout << x;
    }
};

int main(){
    A a;
    a.show(5);
}
```

---

### Q9
```cpp
class A{
private:
    int x = 10;
public:
    int get(){
        return x;
    }
};

int main(){
    A a;
    cout << a.get();
}
```

---

### Q10
```cpp
class A{
public:
    int x = 5;
};

int main(){
    A a;
    A b = a;
    cout << b.x;
}
```

---

### Q11
```cpp
class A{
public:
    A(){
        cout << "A";
    }
};

class B : public A{
public:
    B(){
        cout << "B";
    }
};

int main(){
    B b;
}
```

---

### Q12
```cpp
class A{
public:
    virtual void show(){
        cout << "A";
    }
};

class B : public A{
public:
    void show(){
        cout << "B";
    }
};

int main(){
    B b;
    A* ptr = &b;
    ptr->show();
}
```

---

### Q13
```cpp
class A{
public:
    int x;
    A(){
        x = 5;
    }
};

int main(){
    A a;
    cout << a.x;
}
```

---

### Q14
```cpp
class A{
public:
    static int count;
    A(){
        count++;
    }
};

int A::count = 0;

int main(){
    A a, b, c;
    cout << A::count;
}
```

---

### Q15
```cpp
class A{
public:
    void show(){
        cout << "A";
    }
};

int main(){
    A* a = new A();
    a->show();
}
```

---

### Q16
```cpp
class A{
public:
    int x = 5;
};

int main(){
    A a;
    A &ref = a;
    ref.x = 10;
    cout << a.x;
}
```

---

### Q17
```cpp
class A{
public:
    int x = 5;
};

int main(){
    A a;
    cout << sizeof(a);
}
```

---

### Q18
```cpp
class A{
public:
    A(){
        cout << "A";
    }
};

int main(){
    A a1;
    A a2;
}
```

---

### Q19
```cpp
class A{
public:
    int x;
    A(int x){
        this->x = x;
    }
};

int main(){
    A a = A(5);
    cout << a.x;
}
```

---

### Q20
```cpp
class A{
public:
    int x = 5;
};

int main(){
    A* p = new A();
    cout << p->x;
}
```

---

# Part 3: Final Coding Question

## Problem: Library Management System

Design a system that:

### Requirements:

- Class `Book`
  - name
  - id

- Class `Library`
  - add book
  - remove book
  - display books

---

### Must Use:

- Encapsulation  
- Constructors  
- Inheritance (optional bonus)  
- Polymorphism (bonus)  
- Static counter  

---

### Constraints:

- Max 100 books  
- Prevent duplicate IDs  
- Handle invalid input  

---

## Evaluation Criteria

| Criteria | Description |
|--------|------------|
| Design | Proper OOP usage |
| Logic | Correct behavior |
| Code | Clean and readable |
| Structure | Organized classes |

---

## Next Step

 Move to: [03-Data-Structures](../03-Data-Structures/README.md)
