
# 📘 C++ Pointer Project  
## **Task Manager Using Classes + Raw Pointers + Dynamic Pointers + `unique_ptr`**

---

## 🎯 Project Overview

In this project, you will build a **Task Manager** application using **three pointer techniques**:

1. Raw pointers to **stack-allocated objects**  
2. Raw pointers to **heap-allocated objects** using `new` and `delete`  
3. Smart pointers (`std::unique_ptr`) for automatic memory management  

You must use **classes**.

---

## 🧱 Class Definition Requirement

You must define the following class:

```cpp
class Task {
private:
    int id;
    std::string description;
    bool completed;

public:
    Task();
    Task(int id, const std::string& desc);

    void markCompleted();
    bool isCompleted() const;
    int getId() const;
    std::string getDescription() const;
};
```

You may extend it as you wish.

---

# 🅿️ Part A — Raw Pointers to Stack Objects

### Goal  
Practice pointer usage with stack objects.

### Requirements

- Create `Task` objects on the **stack** in `main()`:

```cpp
Task t1(1, "Finish project");
Task t2(2, "Study for exam");
```

- Create raw pointers:

```cpp
Task* p1 = &t1;
Task* p2 = &t2;
```

- Write a helper function:

```cpp
void completeTask(Task* t);
```

- Demonstrate pointer access, dereferencing, and calling methods.

- No `new` or `delete` allowed in this part.

### Deliverable  
A short demo showing the correct usage of raw pointers pointing to stack objects.

---

# 🅿️ Part B — Dynamic Memory Using Raw Pointers (`new` / `delete`)

### Goal  
Use manually managed heap memory.

### Requirements

1. Dynamically allocate an array of `Task`:

```cpp
Task* tasks = new Task[capacity];
```

2. Track:

```cpp
int size = 0;
int capacity = 5;
```

3. Implement:

```cpp
void addTask(Task* tasks, int& size, int capacity, const std::string& desc);
void removeTask(Task* tasks, int& size, int id);
void listTasks(Task* tasks, int size);
```

4. Demonstrate:

- Use of pointer indexing or pointer arithmetic  
- Correct memory allocation  
- Correct memory deallocation (`delete[] tasks;`)  
- No memory leaks  

5. Optional bonus: Implement a dynamic **resize** function.

### Deliverable  
A menu-driven program using dynamically allocated raw pointers.

---

# 🅿️ Part C — Smart Pointer Version (`std::unique_ptr`)

### Goal  
Use RAII and `unique_ptr` for memory-safe management.

### Requirements

Create a `TaskManager` class:

```cpp
class TaskManager {
private:
    std::unique_ptr<Task[]> tasks;
    int size;
    int capacity;

public:
    TaskManager(int initialCapacity);

    void addTask(const std::string& desc);
    void removeTask(int id);
    void listTasks() const;
};
```

Constructor must use:

```cpp
tasks = std::make_unique<Task[]>(initialCapacity);
```

### Must Demonstrate

- No manual `delete`  
- No raw `new` for memory owned by `unique_ptr`  
- Safe object ownership and cleanup  

### Deliverable  
A second version of the Task Manager using smart pointers.

---

# 🅿️ Part D — Reflection (½–1 page)

Answer the following:

1. Differences between:
   - pointer to stack memory  
   - pointer to heap memory  
   - smart pointer (`unique_ptr`)  

2. Where and why `delete` was used.  
3. Explanation of ownership in each design.  
4. Which pointer method is safest and why.

---

# 📦 Submission Checklist

Submit (all in the GitHub)

- All `.cpp` and `.h` files 
- UML diagram 
- Working `main.cpp`  
- Reflection document
- Code must compile without warnings (**remember without warnings, I am talking about the errors**) 

---

# 🧮 Rubric (100 points)

## 1. Class Design — 10 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Proper use of class with constructor, methods and use of UML | 10 | 5 | 0 |

---

## 2. Part A — Raw Pointers (Stack) — 20 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Correct pointer usage | 10 | 5 | 0 |
| Demonstration and explanation | 10 | 5 | 0 |

---

## 3. Part B — Dynamic Raw Pointers — 25 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Correct use of `new` and `delete[]` | 10 | 5 | 0 |
| All features implemented | 10 | 5 | 0 |
| No memory leaks | 5 | 3 | 0 |

---

## 4. Part C — Smart Pointers (`unique_ptr`) — 25 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Correct use of unique_ptr | 10 | 5 | 0 |
| Proper RAII & ownership | 10 | 5 | 0 |
| Smart pointer version functional | 5 | 3 | 0 |

---

## 5. Program Quality — 10 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Clean modular code | 5 | 3 | 0 |
| No warnings | 5 | 3 | 0 |

---

## 6. Reflection — 10 pts

| Criterion | Full | Partial | None |
|----------|------|---------|------|
| Understanding of pointer concepts | 7 | 4 | 0 |
| Discussion references their own code | 3 | 2 | 0 |

