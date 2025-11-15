# Understanding Class Relationships in OOP  

### **IS-A vs HAS-A (Inheritance vs Composition)**  

---

## 🔍 Introduction  

When designing classes in C++, choosing the correct relationship is essential for clean, maintainable, and intuitive code.  
Two main relationships guide us:

- **IS-A → Inheritance**
- **HAS-A → Composition**

This lecture teaches how to correctly identify each.

---

# 1. IS-A Relationship (Inheritance)

### ✔️ Definition  

Use **inheritance** when one class is a **specialized version** of another.

### ✔️ Test  

Ask:

> **“Can I say ClassB *is a* ClassA?”**

If yes → **use inheritance**.

### ✔️ Characteristics  

- Represents a hierarchy.  
- Common base attributes & behaviors.  
- Derived class extends or specializes the base class.  
- Useful for polymorphism.

### ✔️ Example  

**Student IS-A Person**

```cpp
class Person {
protected:
    string name;
};

class Student : public Person {
private:
    int studentID;
};
```

Here, a student **is a person** → inheritance is correct.

---

# 2. HAS-A Relationship (Composition)

### ✔️ Definition  

Use **composition** when one class **contains**, **owns**, or is **made up of** another class.

### ✔️ Test  

Ask:

> **“Does ClassA *have a* ClassB?”**

If yes → **use composition**.

### ✔️ Characteristics  

- Represents a whole–part relationship.  
- The containing class controls the lifetime of the included objects.  
- Expresses *ownership*.

### ✔️ Example  

**Car HAS-A Engine**

```cpp
class Engine {
public:
    void start();
};

class Car {
private:
    Engine e;   // Car HAS-A Engine
};
```

The engine is part of the car → composition is correct.

---

# 3. Comparing IS-A vs HAS-A

| Relationship            | Uses           | Question                   | Example            |
| ----------------------- | -------------- | -------------------------- | ------------------ |
| **Inheritance (IS-A)**  | Specialization | Is ClassB a ClassA?        | Box IS-A Rectangle |
| **Composition (HAS-A)** | Ownership      | Does ClassA have a ClassB? | House HAS-A Room   |

---

# 4. Practice Exercise  

Determine whether each pair is best modeled with **inheritance (IS-A)** or **composition (HAS-A)**.

| Pair             | Relationship | Reason |
| ---------------- | ------------ | ------ |
| Car & Vehicle    |              |        |
| Car & Engine     |              |        |
| Student & Person |              |        |
| Student & Course |              |        |
| Team & Player    |              |        |
| Rectangle & Box  |              |        |
| House & Room     |              |        |

---

# 5. Summary  

- Use **inheritance** ONLY when the *IS-A* test clearly makes sense.  
- Use **composition** when one class *has* another as part of its structure.  
- If it feels forced, it's probably the wrong relationship.

---

# Solution

| Pair             | Relationship | Reason                            |
| ---------------- | ------------ | --------------------------------- |
| Car & Vehicle    | IS-A         | A car is a type of vehicle.       |
| Car & Engine     | HAS-A        | A car has an engine.              |
| Student & Person | IS-A         | A student is a person.            |
| Student & Course | HAS-A        | A student has/takes courses.      |
| Team & Player    | HAS-A        | A team has players.               |
| Rectangle & Box  | IS-A         | A box is a specialized rectangle. |
| House & Room     | HAS-A        | A house has rooms.                |
