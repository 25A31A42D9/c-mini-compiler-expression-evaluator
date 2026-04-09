# 🧠 Mini Compiler - Expression Evaluator in C

## 📌 Overview

This project implements a basic **expression evaluator** in C that mimics a small part of a compiler's functionality. It converts an **infix expression** (human-readable format) into **postfix notation** (machine-friendly format) and evaluates the result.

---

## 🚀 Features

* Infix to Postfix conversion
* Expression evaluation using stack
* Operator precedence handling
* Supports basic arithmetic operators: `+`, `-`, `*`, `/`

---

## 🛠️ Technologies Used

* C Programming Language
* Stack Data Structure
* Standard Libraries (`stdio.h`, `ctype.h`, `stdlib.h`, `string.h`)

---

## ⚙️ How It Works

1. User enters an **infix expression**
   Example: `2+3*4`

2. Program converts it to **postfix expression**
   Output: `234*+`

3. Postfix expression is evaluated using stack
   Result: `14`

---

## ▶️ How to Run

### Step 1: Compile

```bash
gcc mini_compiler.c -o mini_compiler
```

### Step 2: Execute

```bash
./mini_compiler
```

---

## 📌 Example

**Input:**

```
2+3*4
```

**Output:**

```
Postfix Expression: 234*+
Result: 14
```

---

## ⚠️ Limitations

* Supports only **single-digit numbers**
* No error handling for invalid expressions
* Does not support variables

---

## 🔥 Future Improvements

* Support multi-digit numbers (e.g., `12+34`)
* Add variables and assignments
* Implement error handling
* Extend to full expression parsing

---

## 🎯 Learning Outcomes

* Understanding of stack operations
* Expression parsing techniques
* Basics of compiler design
* Problem-solving using data structures

---

## 📁 Project Structure

```
mini-compiler/
│── mini_compiler.c
│── README.md
```

---

## 📌 Author

Your Name

---

## ⭐ Note

This project is intended for educational purposes and demonstrates core concepts of compiler design in a simplified manner.
