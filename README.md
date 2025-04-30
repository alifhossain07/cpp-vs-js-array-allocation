# 📁 C++ vs JavaScript: Array Allocation Comparison

This repository contains all the implementations for the four primary array allocation categories — **Fixed Stack Dynamic**, **Stack Dynamic**, **Fixed Heap Dynamic**, and **Heap Dynamic** — in both **C++** and **JavaScript**.

At the end, I have reflected on the structural differences between the two languages based on how they handle memory allocation and array behavior.

---

## 🔍 Allocation Types Overview

### 1. Fixed Stack Dynamic

- **C++**: The array size is known at compile time and memory is allocated on the stack. These arrays are efficient and automatically deallocated once the function ends.
- **JavaScript**: JavaScript does not support stack-based allocation explicitly. We simulate a fixed-size array to represent this category, though the memory is still managed on the heap.

### 2. Stack Dynamic

- **C++**: The array size is determined at runtime and, if supported (e.g., in GCC), memory is allocated on the stack using variable-length arrays.
- **JavaScript**: Size is determined during execution, and elements are added dynamically using `push()`. However, memory is always allocated on the heap.

### 3. Fixed Heap Dynamic

- **C++**: Memory is allocated on the heap using the `new` keyword. The array size is determined at runtime and remains fixed after allocation.
- **JavaScript**: Arrays are always heap-allocated. We use the `new Array(size)` constructor to mimic a fixed-size array, though internally it still behaves dynamically.

### 4. Heap Dynamic

- **C++**: Memory can be dynamically allocated and reallocated during runtime using pointers and manual memory management techniques.
- **JavaScript**: This is the default behavior of arrays. They grow and shrink dynamically during execution without manual intervention.

---

C++ provides low-level control over memory management. Developers explicitly choose whether to allocate on the stack or heap, and they must manually manage memory for heap-allocated data. This gives fine-grained control but increases the complexity and responsibility for memory safety.

JavaScript, on the other hand, abstracts away memory allocation. All arrays are stored on the heap, and resizing is handled automatically by the runtime. While this simplifies development and reduces the risk of memory-related bugs, it offers less control over performance and allocation strategy.

This comparison highlights the fundamental differences between a systems programming language like C++, which prioritizes control and performance, and a high-level language like JavaScript, which focuses on developer convenience and abstraction.
