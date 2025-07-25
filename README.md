
# Experiment 2: Exploring Data Types and Storage Classes in C++

---

## Aim

The purpose of this experiment is to gain practical understanding of various data types and storage classes in C++. You will analyze their memory consumption, scope, and lifetime through programming exercises and learn their roles in structured programming.

---

## Tools Used

- Visual Studio Code (VS Code)

---

## Objectives

- To classify the different data types available in C++.
- To explore the four fundamental storage classes: auto, register, static, and extern.
- To observe how storage classes behave across repeated function calls.
- To use the sizeof() operator to check the memory size of various data types.

---

## Theory

### Understanding Data Types in C++

Data types determine what kind of data a variable can store. C++ offers a variety of data types grouped into categories:

- **Primitive Data Types:** Basic types such as integers, floating points, characters, and booleans.  
  Examples include `int` (integer values), `float` (single precision decimals), `double` (higher precision decimals), `char` (single characters), `bool` (true or false), `short` (smaller integers), and `long` (larger integers).

- **Derived Data Types:** These include arrays, pointers, references, and functions.

- **User-defined Data Types:** Types created by the programmer such as structs, unions, enums, and classes.

- **Void Type:** Used for functions that do not return any value.

- **The sizeof() Operator:** This operator returns the size in bytes that a variable or data type occupies in memory.

---

### Storage Classes in C++

Storage classes dictate the lifespan, scope, and visibility of variables, as well as their default initialization values. The key storage classes are:

1. **auto**  
   Variables declared with `auto` have local scope limited to the block they are defined in and exist only for the duration of that block. By default, they contain garbage values unless initialized. Modern C++ uses `auto` mainly for type inference.

2. **register**  
   Designed for variables that need quick access, `register` suggests storing the variable in a CPU register if possible. These variables are local with block scope and uninitialized by default. They cannot have their memory address taken.

3. **static**  
   Static variables retain their value between function calls. Although their scope is local to the block, their lifetime extends for the entire program execution. They are initialized to zero by default.

4. **extern**  
   Used to declare global variables defined in other files. These have global scope and lifetime throughout the program execution and are initialized to zero by default.

---

## How to Proceed

- Define variables using each of the four storage classes.
- Use the `sizeof()` operator to print out the memory footprint of various data types.
- Write functions to illustrate how variables declared with different storage classes behave when called multiple times.
- Run the program and observe the output to deepen your understanding of variable scope, lifetime, and storage.

---

## Sample Output Overview

### Memory Sizes

You will see outputs indicating the size of fundamental data types, for example:  
- Integer: 4 bytes  
- Float: 4 bytes  
- Boolean: 1 byte  
- Long Integer: 8 bytes  
- Short Integer: 2 bytes  
- Double: 8 bytes  
- Character: 1 byte  

### Behavior of Storage Classes

- **Static variables** maintain their value across calls, and their memory address remains constant.  
- **Auto variables** are reinitialized each time the block is executed, and their addresses may vary.  
- **Extern variables** refer to global variables accessible across different program files.  
- **Register variables** reside in CPU registers for fast access, but their address cannot be taken.

The output will detail addresses, sizes, and current values for variables declared under these classes through several function calls, demonstrating their distinct behaviors.

---

This experiment will help solidify your grasp of how C++ handles memory and variable lifetimes, essential knowledge for effective programming and optimization.


